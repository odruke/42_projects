/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:58:04 by druke             #+#    #+#             */
/*   Updated: 2023/05/07 22:06:33 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printptr(int	*ptr)
{
	int	len;
	int	adress;
	char	*cadress;
	
	adress = &ptr;
	cadress = ft_itoa(adress);
	ft_printstr(cadress);
	len = ft_strlen(cadress);
	return (len);

}
