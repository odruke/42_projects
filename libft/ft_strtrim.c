/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:24:48 by druke             #+#    #+#             */
/*   Updated: 2023/03/04 14:05:16 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getini(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i++;
	}
	return (i);
}

static int	getend(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (!ft_strchr(set, s1[i]))
			return (i + 1);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		end;
	int		nlen;
	char	*ns;

	ini = getini(s1, set);
	end = getend(s1, set);
	nlen = end - ini;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	if (end <= ini)
		return (ft_strdup(""));
	ns = (char *)malloc((nlen + 1) * sizeof(char));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1 + ini, nlen + 1);
	return ((char *)ns);
}
