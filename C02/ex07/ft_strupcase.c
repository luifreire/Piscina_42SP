/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:40:46 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/08 14:24:07 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
/* #include<stdio.h>

int	main()
{
	char phr[] = "can u do it";
	char phr2[] = "betucan";
	char phr3[] = "ButForReal";
	
	printf("%s\n", ft_strupcase(phr));
	printf("%s\n", ft_strupcase(phr2));
	printf("%s\n", ft_strupcase(phr3));

	return (0);
} */
