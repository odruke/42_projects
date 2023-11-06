/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:53:23 by odruke            #+#    #+#             */
/*   Updated: 2022/09/12 19:46:30 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		++num;
	}
}

/*
int	main(void)
{
ft_print_numbers();
}
*/
