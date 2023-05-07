/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:07 by druke             #+#    #+#             */
/*   Updated: 2023/05/06 18:37:38 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
static int	f_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == '%')
		len += ft_printchar(va_arg(args, int));
	return (len);
}
int	ft_printf(char *str, ...)
{
	va_list	args;
	int	len;
	int	i;

	va_start(args, str);
	i = 0;
	while (str[i])
		if (str[i] == '%')
			len += f_format(args, (str[i + 1]));
		else
			len += ft_printchar(str[i + 1]);
	va_end(args);
	return(len);
}
