/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 07:34:17 by druke             #+#    #+#             */
/*   Updated: 2023/05/12 11:43:30 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printunsigned(unsigned int i)
{
	int cint;
	int	len;

	cint =(int)i;
	len = 0;
	if (cint < 0)
		cint *= -1;
	len = ft_printnbr(cint);
	return (len);
}
