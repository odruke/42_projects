/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:58:04 by druke             #+#    #+#             */
/*   Updated: 2023/05/09 07:39:57 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	f_ptrlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static	void f_putptr(uintptr_t num, int len)
{
	while (len > 0)
	{
		if ((num % 16) <= 9)
			ft_printchar(48 + (num % 16));
		else
			ft_printchar((num % 16) + 87);
		num /= 16;
		len--;
	}
}

int	ft_printptr(unsigned long long *ptr)
{
	int	len;

	len = 2;
	write (1, "0x",2);
	if (*ptr == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		f_putptr(*ptr, f_ptrlen(*ptr));
		len += f_ptrlen(*ptr); 
	}	
	return (len);
}
