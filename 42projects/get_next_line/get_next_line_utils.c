/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:26:32 by druke             #+#    #+#             */
/*   Updated: 2023/07/19 06:37:55 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
		p[i++] = '\0';
	return ;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = (void *)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < (size - 1)) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tl;
	size_t	ls1;
	size_t	i;
	char	*ns;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	tl = (ft_strlen(s1) + ft_strlen(s2));
	ns = (char *)malloc((tl + 1) * sizeof(char));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1, ls1 + 1);
	i = 0;
	while (s2[i])
	{
		ns[ls1 + i] = s2[i];
		i++;
	}
	ns[tl] = '\0';
	return (ns);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (p = (char *)ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
