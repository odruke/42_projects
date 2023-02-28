/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:18:25 by odruke            #+#    #+#             */
/*   Updated: 2023/02/28 13:11:19 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*bdst;
	char	*bsrc;
	size_t	i;

	bdst = (char *) dst;
	bsrc = (char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (bdst > bsrc)
		while (n-- > 0)
			bdst[n] = bsrc[n];
	else
	{
		while (i < n)
		{
			bdst[i] = bsrc[i];
			i++;
		}
	}	
	return (dst);
}
