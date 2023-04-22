/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:51:12 by odruke            #+#    #+#             */
/*   Updated: 2022/09/11 19:40:15 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
/*
int	main ()
{
	int a;
	int b;
	int *aptr;
	int *bptr;
	a = 4;
	b = 5;
	aptr = &a;
	bptr = &b;
	ft_swap(aptr, bptr);
	printf("%d, %d", a, b);
}
*/
