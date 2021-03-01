/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:33:09 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/03 11:31:56 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;

	x = 0;
	while (x < size)
	{
		y = x;
		while (y < size)
		{
			if (tab[x] >= tab[y])
			{
				ft_swap(&tab[x], &tab[y]);
			}
			++y;
		}
		++x;
	}
}
