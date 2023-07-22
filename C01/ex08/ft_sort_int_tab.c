/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:18:38 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/06 18:10:09 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	sort;
	int	beg;

	while (size > 0)
	{
		beg = 0;
		while (beg < size)
		{
			if (tab[beg] > tab[beg +1])
			{
				sort = tab[beg];
				tab[beg] = tab [beg + 1];
				tab[beg + 1] = sort;
			}
			beg++;
		}
		size--;
	}
}
/*#include <stdio.h>
int		main()
{
	int tab[5] = {50, 40, 20, 10, 30};
	int size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}*/
