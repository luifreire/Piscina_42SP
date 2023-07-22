/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:39:56 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:32:33 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] < 32) || (str[i] > 126))
				return (0);
			i++;
		}
	}	
	return (1);
}
/* #include<stdio.h>

int	main()
{
	char phr[] = "\n hehe";
	char phr2[] ="nooo000n dud3";
	
	printf("%d\n", ft_str_is_printable(phr));
	printf("%d\n", ft_str_is_printable(phr2));

	return (0);
} */
