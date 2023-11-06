/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:57:42 by odruke            #+#    #+#             */
/*   Updated: 2022/09/21 23:28:03 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac,char **av)
{
	int	mia;
	int	original;

	if(ac == 2)
	{
		mia = ft_atoi(av[1]);
		original = atoi(av[1]);
		printf ("mia %d\noriginal%d\n", mia, original);
	}
		
}
*/	
