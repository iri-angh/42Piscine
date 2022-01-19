/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpileri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:01:14 by dpileri           #+#    #+#             */
/*   Updated: 2021/10/03 11:57:55 by dpileri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == 1))
				ft_putchar('A');
			else if ((l == 1 && c == x) || (l == y && c == x))
				ft_putchar('C');
			else if ((c == 1) || (l == y) || (l == 1) || (c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}	
