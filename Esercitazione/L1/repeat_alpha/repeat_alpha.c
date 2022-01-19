/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:08:13 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/19 16:19:13 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int repeat;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat =1;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat += argv[1][i] - 'A';
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat += argv[1][i] -  'a';
			while (repeat)
			{
				write(1, &argv[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
				
					








