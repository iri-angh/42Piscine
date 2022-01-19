/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:18:25 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/03 16:16:11 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	indice;
	int	fine;
	int	temp;

	indice = 0;
	fine = size - 1;
	while (indice < (size / 2 ))
	{
		temp = tab[indice];
		tab[indice] = tab[fine];
		tab[fine] = temp;
		indice++;
		fine--;
	}
}
