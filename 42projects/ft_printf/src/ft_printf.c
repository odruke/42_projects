/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:07 by druke             #+#    #+#             */
/*   Updated: 2023/05/02 16:25:01 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>

int f_nargs(char *str)
{
	int	numargs;
	int	i;

	i = 0;
	numargs = 0;
	while (str[i])
	{
		if (str[i] == '%')
			numargs++;
		i++;
	}
	
	return (numargs);
}

char	*addspacer(char *str, char side, char spacer, int len)
{
	char	*newstring;
	int	i;

	newstring = ft_calloc(sizeof(char), len);
	i = 0
	if (side == l)
		while (str[i])
		{
			newstring[i] = str[i];
			i++
		}
		while (len != i)
		{
			newstring[len] = spacer;
			len--;
		}
	else
		while(len != ft_strlen(str))
		{
			newstring[len] = str[i];
			len--;
			i--;
		}
		while(len != 0)
		{
			newstring[len] = spacer;
			len--;
		}
}

char	*width(char *str, char *format)
{
	char	spacer;
	char	side;
	int	slen;
	int	i;
	int	width;

	side = r;
	i = 0;
	slen = ft_strlen(str);
	spacer = ' '; 
	if (ft_isdigit(format[i + 1]) || format[i + 1] == '-')
	{
		if (format == 0)
		{
			spacer == '0';
			width = ft_atoi(*format + 2);
		}
		else if (format == '-')
			side = l;
		else
			width = ft_atoi(*format + 1);
		while (width > slen)
			addspacer(str, side, spacer, width)
	}
}
/*void	checkformat(char *str)
{
	int	i;
	
	i = 0;
	if (str[i + 1] == 'c')
		ft_putchar(c)
}

nor finished
*/
int	ft_printf(char *str, ...)
{
	va_list	args;
	int	nargs;
	int	slen;
	int	i;
	int	e;

	va_start(args, str);
	i = f_nargs(str);
	while (str[e])
		if (str[e] == '%')
			(*str + e)
	while (i != 0)
	//	int arg = va_arg(arg, int);??

	slen = ft_strlen(final);
	return(slen);
}
