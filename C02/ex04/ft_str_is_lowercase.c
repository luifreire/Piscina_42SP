/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:38:38 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:31:21 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
			if ((str[i] < 'a') || (str[i] > 'z'))
				return (0);
			i++;
		}
	}	
	return (1);
}
/* #include<stdio.h>

int	main()
{
	char phr[12] = "hereitcomes";
	char phr2[7] = "OHNooo";
	char phr3[5] = "HUMM";
	
	printf("%d\n", ft_str_is_lowercase(phr));
	printf("%d\n", ft_str_is_lowercase(phr2));
	printf("%d\n", ft_str_is_lowercase(phr3));

	return (0);
} */
