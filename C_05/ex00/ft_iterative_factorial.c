/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:25:49 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/11 10:42:27 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;
	int	i;

	i = 1;
	fat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i < nb + 1)
		{
			fat = fat * i;
			i++;
		}
	}
	return (fat);
}
