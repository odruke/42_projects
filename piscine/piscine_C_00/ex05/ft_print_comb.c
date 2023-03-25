/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:48:40 by odruke            #+#    #+#             */
/*   Updated: 2022/09/08 23:23:08 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharmore(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' | b != '8' | c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb(void)
{
	char	cent;
	char	dec;
	char	uni;

	cent = '0';
	while (cent <= '7')
	{	
		dec = cent + 1;
		while (dec <= '8')
		{
			uni = dec + 1;
			while (uni <= '9')
			{	
				ft_putcharmore(cent, dec, uni);
						uni++;
			}
				dec++;
		}
		cent++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//}
