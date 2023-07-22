/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:57:33 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/13 17:55:34 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/* #include<stdio.h>

int	main ()
{
	char phrase[100] = "yeah whatever dude";
	int length;
	
	length = ft_strlen(phrase);

	printf("The length is : %d", ft_strlen(phrase));

	return 0;
} */
