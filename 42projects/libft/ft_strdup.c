/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:40:28 by druke             #+#    #+#             */
/*   Updated: 2023/02/20 21:43:13 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!d)
		return (NULL);
	while (i < ft_strlen(s))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
