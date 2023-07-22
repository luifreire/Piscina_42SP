/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:18:00 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/07 11:05:15 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev;
	int	beg;

	beg = 0;
	while (beg < size)
	{
		rev = tab[beg];
		tab[beg] = tab[size - 1];
		tab[size -1] = rev;
		beg++;
		size--;
	}
}
/*#include<stdio.h>
int	main()
{
	int	tab[5] = {10, 20, 30, 40, 50};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}*/
