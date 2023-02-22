/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:34:12 by druke             #+#    #+#             */
/*   Updated: 2023/02/22 12:21:57 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tl;
	size_t	ls1;
	size_t	i;
	char	*ns;

	if (!s1 || !s2)
		return 	(NULL);
	ls1 = ft_strlen(s1);
	tl = (ft_strlen(s1) + ft_strlen(s2));
	ns = (char *)malloc((tl +1) * sizeof(char));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1, ls1);
	i = 0;
	while (s2[i])
	{
		ns[ls1 + i] = s2[i];
		i++;
	}
	ns[ls1 + i] = '\0';
	return (ns);
}
