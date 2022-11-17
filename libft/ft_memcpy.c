/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:18:25 by odruke            #+#    #+#             */
/*   Updated: 2022/11/17 11:16:56 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dst, const void *src, size_t n)
{
	size_t	i;
	const char	*csrc;
	const char	*cdest;

	i = 0;
	csrc = src;
	cdst = dst;
	while (i < n)
		cdst[i] = csrc[i];
		i++;
	return (cdest);
}
