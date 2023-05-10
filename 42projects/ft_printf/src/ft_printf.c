/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:07 by druke             #+#    #+#             */
/*   Updated: 2023/05/10 21:43:59 by druke            ###   ########.fr       */
/*   Updated: 2023/05/09 21:21:40 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	f_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == '%')
		len += ft_printchar('%');
	else if (format == 's')
		len += ft_printstr(va_arg(args, char*));
	else if ((format == 'i') || (format == 'd'))
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	else if ((format == 'x') || (format == 'X'))
		len += ft_printhex(va_arg(args, unsigned int), format);
	return (len);
}
int	ft_printf(char *str, ...)
{
	va_list	args;
	int	len;
	int	i;

	len = 0;
	va_start(args, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			len += f_format(args, (str[i + 1]));
			i++;
		}
		else
			len += ft_printchar(str[i]);
	}
	va_end(args);
	return(len);
}
