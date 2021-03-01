/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 04:13:44 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/04 04:13:46 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		check_base(char *bse)
{
	int i;
	int j;

	i = 0;
	while (bse[i] != '\0')
	{
		if (bse[i] == '+' || bse[i] == '-')
			return (0);
		j = i + 1;
		while (bse[j])
		{
			if (bse[i] == bse[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	recursive(int x, char *b)
{
	int m;

	if (x == 0 || !b || ft_strlen(b) <= 1 || !check_base(b))
		return ;
	if (x < 0)
	{
		write(1, "-", 1);
		x *= -1;
	}
	recursive(x / ft_strlen(b), b);
	m = x % ft_strlen(b);
	write(1, &(b[m]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr == INT_MIN)
		write(1, "-2147483648", 11);
	else
		recursive(nbr, base);
}
