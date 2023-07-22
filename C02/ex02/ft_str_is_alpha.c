/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:37:21 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:30:20 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a')
				|| (str[i] > 'z'))
				return (0);
			i++;
		}
	}
	return (1);
}
/* #include<stdio.h>

int	main()
{
	char phr[10] = "yourhonor";
	char phr2[10] = "who cares";
	char phr3[30] = "505-842-5662";
	char phr4[5] = "MEHH";
	

	printf("%d\n", ft_str_is_alpha(phr));
	printf("%d\n", ft_str_is_alpha(phr2));
	printf("%d\n", ft_str_is_alpha(phr3));
	printf("%d\n", ft_str_is_alpha(phr4));

	return (0);
} */
