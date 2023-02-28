/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:54:26 by druke             #+#    #+#             */
/*   Updated: 2023/02/28 12:08:18 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if ((!*little) || (big == little))
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			i2 = 0;
			while ((big[i + i2] == little[i2]) && (i + i2 < len))
			{
				i2++;
				if (little[i2] == '\0')
					return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}
