/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:38:02 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:30:50 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
			if ((str[i] < '0') || (str[i] > '9'))
				return (0);
			i++;
		}
	}	
	return (1);
}
/* #include<stdio.h>

int	main()
{
	char phr[24] = "i fight 4 u albuquerque";
	char phr2[11] ="5058425662";

	printf("%d\n", ft_str_is_numeric(phr));
	printf("%d\n", ft_str_is_numeric(phr2));

	return (0);
} */
