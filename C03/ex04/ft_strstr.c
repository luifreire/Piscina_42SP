/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:41:03 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/13 19:10:16 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/* #include<stdio.h>

int	main()
{
	char haystack[25] = "Trials & Tribulations";
	char needle[10] = "Trials";
	char *res;
	res = ft_strstr(haystack, needle);
	  if (res) {
        printf("string found\n");
        printf("first occurrence of string '%s' in '%s' is '%s'",
			needle, haystack, res);
    } else
        printf("string not found\n");
    return 0;
} */
