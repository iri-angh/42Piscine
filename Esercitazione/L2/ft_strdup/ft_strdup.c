/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:10:56 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/20 17:30:09 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int len;
	char *strcpy;

	len = 0;
	while (src[len])
		len++;
	strcpy = malloc(len + 1);
	if (strcpy ==  0)
		return (0);
	i = 0;
	while(src[i])
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = '\0';
	return(strcpy);
}
