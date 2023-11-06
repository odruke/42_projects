/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 08:42:22 by druke             #+#    #+#             */
/*   Updated: 2023/05/18 19:03:57 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else if (*str == '\0')
		return (0);
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
