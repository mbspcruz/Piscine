/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 03:55:31 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/10/25 03:55:33 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int v1;
	int v2;
	int v3;

	v1 = -1;
	while (++v1 < 8)
	{
		v2 = v1;
		while (++v2 < 9)
		{
			v3 = v2;
			while (++v3 < 10)
			{
				ft_putchar(v1 + '0');
				ft_putchar(v2 + '0');
				ft_putchar(v3 + '0');
				if (!(v1 == 7 && v2 == 8 && v3 == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
