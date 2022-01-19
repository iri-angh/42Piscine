/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:51:50 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/07 10:54:03 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int a, int b, bool ultimo)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (ultimo)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	bool	ultimo;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ultimo = !(a == 98 && b == 99);
			ft_write_comb(a, b, ultimo);
			b++;
		}
		a++;
	}
}


int main ()
{
	ft_print_comb2();
	return 0;
}











