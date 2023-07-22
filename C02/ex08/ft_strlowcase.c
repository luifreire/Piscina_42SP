/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:41:24 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:33:21 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}
/* #include<stdio.h>

int	main()
{
	char phr[] = "NOW DO A BACKFLIP";
	char phr2[] = "yEAAH do ITT";
	char phr3[] = "hMMMM 3333 WAAAAt";

	printf("%s\n", ft_strlowcase(phr));
	printf("%s\n", ft_strlowcase(phr2));
	printf("%s\n", ft_strlowcase(phr3));
} */
