/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:55:31 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/20 16:15:11 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset) == 1)
			str++;
		i = ft_len(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_strcpy(char *src, int j)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc((j + 1));
	if (s == 0)
		return (0);
	while (i < j && src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	char		**res;
	int			size;
	int			i;
	int			j;

	i = 0;
	size = ft_count(str, charset);
	res = malloc((size + 1) * sizeof(char *));
	if (res == 0)
		return (0);
	while (i < size)
	{
		while (is_charset(*str, charset))
			str++;
		j = ft_len(str, charset);
		res[i] = ft_strcpy(str, j);
		str += j;
		i++;
	}
	res[size] = 0;
	return (res);
}
