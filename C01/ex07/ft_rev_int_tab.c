/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:32:44 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/03 11:30:19 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int count;

	count = 0;
	while (count < size / 2)
	{
		aux = tab[count];
		tab[count] = tab[(size - 1) - count];
		tab[(size - 1) - count] = aux;
		count++;
	}
}
