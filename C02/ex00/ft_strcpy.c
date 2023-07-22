/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:34:56 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/12 09:13:03 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include<stdio.h>
int	main()
{
	char source[] = "is it working";
	char destination[] = "";
	printf(":%s:\n", destination);
	ft_strcpy(destination, source);
	printf(":%s:\n", destination);
	
	return (0);
} */
