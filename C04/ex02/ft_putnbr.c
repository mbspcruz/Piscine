/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 04:12:55 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/04 04:12:56 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
