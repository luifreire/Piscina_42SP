/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:32:23 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/13 14:45:35 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* #include<stdio.h>

int main()
{
	printf("%d\n", ft_strcmp ("Teste", "Teste1"));
	printf("%d\n", ft_strcmp("Teste", "Te"));
	printf("%d\n", ft_strcmp("Te", "Teste"));
	printf("%d\n", ft_strcmp("Teste", "Teste"));
} */
