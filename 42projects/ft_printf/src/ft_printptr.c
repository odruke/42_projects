/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:58:04 by druke             #+#    #+#             */
/*   Updated: 2023/05/17 20:34:21 by odruke           ###   ########.fr       */
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

static int	f_putptr(uintptr_t num, unsigned long int len)
{
	char	*temp;

	temp = malloc(sizeof(char) * len);
	if (!temp)
		return (0);
	if (len > ULONG_MAX)
		len = ULONG_MAX;
	while (len > 0)
	{
		if ((num % 16) <= 9)
			temp[--len] = (48 + (num % 16));
		else
			temp[--len] = ((num % 16) + 87);
		num /= 16;
	}
	ft_printstr(temp);
	free (temp);
	return (1);
}

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 2;
	write (1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else if (ptr < 0)
		len += write(1, "1", 1);
	else
	{
		f_putptr(ptr, f_ptrlen(ptr));
		len += f_ptrlen(ptr);
	}	
	return (len);
}
