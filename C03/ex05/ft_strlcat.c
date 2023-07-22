/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:41:07 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/13 14:38:24 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t_length;

	t_length = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (size > i)
	{
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (t_length);
	}
	return (ft_strlen(src) + size);
}
/* #include <stdio.h>
#include <string.h>

int    main(void)
{
    char *src = "numbers";
    char dest[] = "letters";
    int size = 20;

    printf("return: %d\n", ft_strlcat(dest, src, size));
} */
