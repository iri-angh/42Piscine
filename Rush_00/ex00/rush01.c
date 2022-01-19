/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:36:08 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/07 10:24:40 by aanghel          ###   ########.fr       */
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
				ft_putchar('/');
			else if ((l == y && c == x) && (l != 1 && c != 1))
				ft_putchar('/');
			else if ((c != l) && ((c == 1 && l == y) || (l == 1 && c == x)))
				ft_putchar('\\');
			else if ((c == 1) || (l == y) || (l == 1) || (c == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
