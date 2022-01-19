/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:20:47 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/19 16:25:55 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					write(1, &argv[3][0], 1);
				else 
					write(1, &argv[1][i], 1);
			i++;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}








