/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:46:13 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/20 14:36:21 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int res;


	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '\0')
		return (0);
	else		
	{
		while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while(str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
				sign = -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - 48);
			i++;
		}
	}
	return(res * sign);
}
