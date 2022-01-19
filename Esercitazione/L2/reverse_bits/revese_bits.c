/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revese_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:43:15 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/21 13:44:54 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
		int		i;
		char	c;

		i = 128;
		while (i > 0)
		{
			if (octet < i)
			{
				c = 48;
				i = i / 2;
				write(1, &c, 1);
			}
			else
			{
				c = 49;
				write(1, &c, 1);
				octet = octet - i;
				i = i / 2;
			}
		}
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int				main(void)
{
				print_bits(swap_bits(25));
				return (0);
}

