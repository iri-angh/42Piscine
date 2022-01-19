/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:03:32 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/11 10:24:41 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fat;

	fat = 0 ;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0 )
		fat = nb * ft_recursive_factorial(nb - 1 );
	return (fat);
}
