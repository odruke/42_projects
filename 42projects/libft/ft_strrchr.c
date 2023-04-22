/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:14:04 by odruke            #+#    #+#             */
/*   Updated: 2023/03/19 13:28:32 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	neddle;
	char			*res;

	neddle = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == neddle)
			res = (char *)s;
		s++;
	}
	if (!neddle)
		return ((char *)s);
	return (res);
}
