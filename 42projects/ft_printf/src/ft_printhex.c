/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 06:44:10 by druke             #+#    #+#             */
/*   Updated: 2023/05/14 09:39:38 by druke            ###   ########.fr       */
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

static	void	f_puthex(unsigned int i, int len, const char format)
{
	char	temp[17];

	while (len > 0)
	{
		if ((i % 16) <= 9)
			temp[--len] = (48 + (i % 16));
		else
		{
			if (format == 'x')
				temp[--len] = ((i % 16) + 87);
			else if (format == 'X')
				temp[--len] = ((i % 16) + 55);
		}
		i /= 16;
	}
	ft_printstr(temp);
}

int	ft_printhex(unsigned int i, const char format)
{
	int	len;

	len = 0;
	f_puthex(i, f_len(i), format);
	len = f_len(i);
	return (len);
}
