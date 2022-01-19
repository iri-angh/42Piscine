/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:51:21 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/19 10:41:46 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	buffer = malloc(range * sizeof(int));
	if (buffer == 0)
		return (0);
	index = 0;
	while (index <= range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
