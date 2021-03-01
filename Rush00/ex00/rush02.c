/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:20:49 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/10/24 21:20:53 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);
static void	write_line(int x, char c1, char c2, char c3);

void		rush(int x, int y)
{
	int h_count;

	h_count = 0;
	if (x <= 0 || y <= 0)
		return ;
	write_line(x, 'A', 'B', 'A');
	while (h_count++ < y - 2)
		write_line(x, 'B', ' ', 'B');
	if (y > 1)
		write_line(x, 'C', 'B', 'C');
}

static void	write_line(int x, char c1, char c2, char c3)
{
	int w_count;

	w_count = 0;
	if (x <= 0)
		return ;
	ft_putchar(c1);
	while (w_count++ < x - 2)
		ft_putchar(c2);
	if (x > 1)
		ft_putchar(c3);
	ft_putchar('\n');
}
