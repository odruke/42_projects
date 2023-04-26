/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:07 by druke             #+#    #+#             */
/*   Updated: 2023/04/26 18:18:45 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <printf.h>
#include <stdarg.h>

int	ft_printf(char *str, ...)
{
	char	format;
	va_list	args;
	int	numargs;

	format = '%';
	numargs = 0;
	while (str)
	{
		if (str == format)
			numargs++;
		str++;
	}
}
