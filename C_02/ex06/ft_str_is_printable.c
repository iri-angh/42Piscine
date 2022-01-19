/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:57:40 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/05 09:30:47 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		index;
	bool	valid;
	char	curr;

	index = 0;
	valid = true;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= ' ') || curr == 127)
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
