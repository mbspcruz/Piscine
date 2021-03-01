/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:39:09 by mgueifao          #+#    #+#             */
/*   Updated: 2020/10/24 16:39:10 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);
static void	write_line(int x, char c1, char c2, char c3);

void	rush(int x, int y)
{
	int h_count;

	h_count = 0;
	if (x <= 0 || y <= 0)
		return ;
	write_line(x, 'A', 'B', 'C');
	while (h_count++ < y - 2)
		write_line(x, 'B', ' ', 'B');
	if (y > 1)
		write_line(x, 'A', 'B', 'C');
}

/*
** Prints a line of x chars using putchar where the first char
** is c1, it's followed by x-n c2 chars and ends with char c3.
** The function terminates by print a LF (new line)
**
** int x - length of the line
** char c1 - first char of the line
** char c2 - buffer char used in the middle of the line
** char c3 - last char of line without counting LF
*/

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
