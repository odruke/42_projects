/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:07 by druke             #+#    #+#             */
/*   Updated: 2023/04/30 19:36:08 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
// #include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(char *str)
{
	char	format;
//	va_list	args;
	int	numargs;
	int	i;

	i = 0;
	format = 's';
	numargs = 0;
	while (str[i])
	{
		if (str[i] == format)
			numargs++;
		str[i]++;
	}
	
	return (numargs);
}
