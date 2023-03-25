/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:38:25 by druke             #+#    #+#             */
/*   Updated: 2023/03/25 20:12:23 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nosubstr(const char *s, char del)
{
	int	i;
	int	nosub;
	int	check;

	check = 0;
	i = 0;
	nosub = 0;
	while (s[i])
	{
		if (s[i] != del && check == 0)
		{
			check = 1;
			nosub++;
		}
		else if (s[i] == del)
			check = 0;
		i++;
	}
	return (nosub);
}

static char	*f_subs(char const *s, int start, unsigned long int len)
{	
	char	*sub;

	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

static int	f_subslen(const char *s, const int start, char del)
{
	int	size;
	int	i;

	i = start;
	size = 0;
	while (s[i] && s[i] != del)
	{
		size++;
		i++;
	}
	return (size);
}

static void	f_free(char **s, int i)
{
	while (i > 0)
	{
		free (s[i]);
		i--;
	}
	free (s);
}

char **ft_split(char const *s, char c)
{
	char	**ns;
	int	subslen;
	int	nosub;
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (!s)
		return (NULL);
	if (!c)
		return (NULL);
	nosub = nosubstr(s, c);
	if (nosub == 0)
		return (NULL);
	ns = (char **)malloc(sizeof(char *) * (nosub + 1));
	if (!ns)
		return (NULL);
	while (ii != nosub)
	{
		while (s[i] == c)
			i++;
		subslen = f_subslen(s, i, c);
		ns[ii] = f_subs(s, i, subslen);
		if (!ns[ii])
		{
			f_free(ns, ii);
			return (NULL);
		}
		i += subslen;
		ii++;
	}
	ns[ii] = '\0';
	return (ns);
}
