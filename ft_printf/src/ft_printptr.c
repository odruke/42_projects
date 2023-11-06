/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:58:04 by druke             #+#    #+#             */
/*   Updated: 2023/05/21 09:38:38 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	f_ptrlen(uintptr_t num)
{
	unsigned long int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static void	f_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		f_putptr(num / 16);
		f_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 2;
	write (1, "0x", 2);
	if (ptr == 0 || !ptr)
	{
		len += write(1, "0", 1);
		return (len);
	}
	else
	{
		f_putptr(ptr);
		len += f_ptrlen(ptr);
	}	
	return (len);
}
