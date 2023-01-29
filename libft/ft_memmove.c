/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:18:25 by odruke            #+#    #+#             */
/*   Updated: 2022/11/22 10:06:05 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*bdst;
	unsigned char	*bsrc;

	bdst = (unsigned char *) dst;
	bsrc = (unsigned char *) src;
	if (bdst < bsrc)
	{
		while (n > 0)
		{
			*bdst = *bsrc;
			bdst++;
			bsrc++;
			n--;
		}
	}	
	else
		while (n > 0)
		{
			bdst[n] = bsrc[n];
			n--;
		}
	return (dst);
}
