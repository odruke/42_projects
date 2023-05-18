/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 06:44:10 by druke             #+#    #+#             */
/*   Updated: 2023/05/18 13:19:52 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	f_len(unsigned int i)
{
	int	len;

	len = 0;
	while (i != 0)
	{
		len++;
		i /= 16;
	}
	return (len);
}

static void	f_puthex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		f_puthex(num / 16, format);
		f_puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_printhex(unsigned int i, const char format)
{
	int	len;

	len = 0;
	if (i == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else
		f_puthex(i, format);
		len = f_len(i);
	return (len);
}
