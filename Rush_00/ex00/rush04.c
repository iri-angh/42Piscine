/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:23:52 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/03 15:57:23 by aanghel          ###   ########.fr       */
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
			if (l == 1 && c == 1)
				ft_putchar('A');
			else if ((l == y && c == x) && (l != 1 && c != 1))
				ft_putchar('A');
			else if ((c != l) && ((c == 1 && l == y) || (l == 1 && c == x)))
				ft_putchar('C');
			else if ((c == 1 ) || (l == y) || (l == 1) || (c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
