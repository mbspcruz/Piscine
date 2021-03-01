/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <mda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 04:13:18 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/08 03:13:07 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
