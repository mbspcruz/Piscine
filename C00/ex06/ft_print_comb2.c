/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 03:56:09 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/01 17:05:12 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_two_digits(int b)
{
	if (b < 100 && b >= 0)
	{
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int v1;
	int v2;

	v1 = 0;
	while (v1 < 99)
	{
		v2 = 1 + v1;
		while (v2 < 100)
		{
			put_two_digits(v1);
			ft_putchar(' ');
			put_two_digits(v2);
			if (!(v1 == 98 && v2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			v2++;
		}
		v1++;
	}
}
