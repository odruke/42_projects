/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:07 by druke             #+#    #+#             */
/*   Updated: 2023/05/18 20:16:12 by odruke           ###   ########.fr       */
/*   Updated: 2023/05/09 21:21:40 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	f_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == '%')
		len += ft_printchar('%');
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if ((format == 'i') || (format == 'd'))
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	else if ((format == 'x') || (format == 'X'))
		len += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == 'u')
		len += ft_printunsigned(va_arg(args, unsigned int));
	return (len);
}

static int	checkplh(char c)
{
	char	*formatlist;

	formatlist = "cx%sidpxXu";
	if (!c || !ft_strchr(formatlist, c))
		return (0);
	else
		return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	va_start(args, str);
	i = -1;
	if (!str || *str == '\0')
		return (0);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			if (!checkplh(str[i + 1]))
				break ;
			len += f_format(args, (str[i++ + 1]));
		}
		else
		{
			len += ft_printchar(str[i]);
			if (len == 0)
				break ;
		}
	}
	va_end(args);
	return (len);
}
