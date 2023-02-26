/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:18:25 by odruke            #+#    #+#             */
/*   Updated: 2023/02/26 18:45:30 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*bdst;
	unsigned char	*bsrc;

	bdst = (unsigned char *) dst;
	bsrc = (unsigned char *) src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*bdst = *bsrc;
		bdst++;
		bsrc++;
		n--;
	}
	return (dst);
}
