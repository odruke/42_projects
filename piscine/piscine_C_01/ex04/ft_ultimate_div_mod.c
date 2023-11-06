/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:39:26 by odruke            #+#    #+#             */
/*   Updated: 2022/09/12 19:29:05 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	holda;
	int	holdb;
	int	div;
	int	mod;

	holda = *a;
	holdb = *b;
	div = holda / holdb;
	mod = holda % holdb;
	*a = div;
	*b = mod;
}
/*
int	main ()
{
	int a;
	int b;
	a = 7;
	b = 4;
	printf ("a es igual a  %i y b es igual a %i, y el resultado \
			de su division y su resto son: \n",a , b);
	ft_ultimate_div_mod(&a, &b);
	printf("%i y %i respectivamente\n",a , b);
}
*/
