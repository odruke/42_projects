/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:08:45 by odruke            #+#    #+#             */
/*   Updated: 2022/09/22 19:07:06 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	count;
	int	fin;

	count = 1;
	res = 1;
	fin = nb;
	while (fin >= count)
	{
		res = (res * nb);
		count++;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>
 
int	main()
{
	printf ("el factorial de %d es %d\n", 10, ft_iterative_factorial(10));
	return (0);
}
*/
