/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:04:59 by odruke            #+#    #+#             */
/*   Updated: 2023/02/22 11:22:20 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < size)
		d++;
	while (src[s] && (d + s + 1) < size)
	{
		dst[d + s] = src[s];
		s++;
	}
	dst[d + s] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
