/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:53:41 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/14 14:26:52 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putchar(char **arg, int size, int j)
{
	int	i;

	while (j < size)
	{
		i = 0;
		while (arg[j][i])
			i++;
		write(1, arg[j], i);
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		i = 0;
		while (argv[j][i] == argv[j + 1][i])
				i++;
		if (argv[j][i] > argv[j + 1][i])
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 0;
		}
		j++;
	}
	ft_putchar(argv, argc, 1);
}
