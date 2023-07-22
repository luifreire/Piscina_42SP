/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:39:11 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:32:04 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
			if ((str[i] < 'A') || (str[i] > 'Z'))
				return (0);
			i++;
		}
	}	
	return (1);
}
/* #include<stdio.h>

int main()
{
	char phr[6] = "HEYOW";
	char phr2[6] = "heyow";
	
	printf("%d\n", ft_str_is_uppercase(phr));
	printf("%d\n", ft_str_is_uppercase(phr2));

	return (0);
} */
