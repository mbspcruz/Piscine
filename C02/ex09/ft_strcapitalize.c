/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:31:43 by mda-cruz          #+#    #+#             */
/*   Updated: 2020/11/03 14:06:11 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int in_word;

	in_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123 && !in_word)
			str[i] -= 32;
		else if (str[i] > 64 && str[i] < 91 && in_word)
			str[i] += 32;
		if ((str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91) ||
	(str[i] > 96 && str[i] < 123))
			in_word = 1;
		else
			in_word = 0;
		i++;
	}
	return (str);
}
