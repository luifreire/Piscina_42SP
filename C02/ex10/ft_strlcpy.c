/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:42:51 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/13 16:26:45 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = {"Testando strlcpy"};
	char dest[7];
	printf("%d\n %s", ft_strlcpy(dest, src, 7), dest);
	return (0);
}
