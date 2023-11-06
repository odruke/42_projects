/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:08:48 by odruke            #+#    #+#             */
/*   Updated: 2022/09/11 23:28:45 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int 	main ()
{
	int a;
	int b;
	int div;
	int mod;
	a = 7;
	b = 4;
	

	ft_div_mod(a, b, &div, &mod);
	printf("el resultado de %d entre %d es %d y el resto %d", a, b, div, mod);
}
*/
