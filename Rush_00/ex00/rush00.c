/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clambert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:44:06 by clambert          #+#    #+#             */
/*   Updated: 2021/10/03 13:25:10 by aanghel          ###   ########.fr       */
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
			if ((l == 1 && c == 1 ) || (l == y && c == x))
				ft_putchar('o');
			else if ((l == y && c == 1 ) || (l == 1 && c == x))
				ft_putchar('o');
			else if ((l == y) || (l == 1))
				ft_putchar('-');
			else if ((c == 1) || (c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
