/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:34:17 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/20 21:55:55 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int scan(char *str, char c, int nb)
{
	while (nb >= 0)
	{
		if(str[nb] == c)
			return (0);
		nb--;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (scan(s1, s1[i], i - 1))
					write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
