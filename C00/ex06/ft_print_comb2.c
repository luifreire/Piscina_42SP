/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:54:45 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/06 11:51:46 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	i;
	char	j;

	if (num <= 9)
	{
		i = num + 48;
		ft_putchar('0', i);
	}
	else if (num <= max)
	{
		i = (num % 10) + 48;
		j = (num / 10) + 48;
		ft_putchar(j, i);
	}
}

void	ft_catint(int fir, int sec)
{
	ft_putint(fir, 98);
	write(1, " ", 1);
	ft_putint(sec, 99);
	if (fir != 98 || sec != 99)
		ft_putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_catint(f, s);
			s++;
		}
		f++;
	}
}
/*int main ()
{
    ft_print_comb2();
	return 0;
}*/
