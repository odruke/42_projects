/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:38:25 by druke             #+#    #+#             */
/*   Updated: 2023/03/19 17:18:55 by druke            ###   ########.fr       */
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
		if (s[i] == del)
			check = 0;
		if (s[i] != del && check == 0)
		{
			check = 1;
			nosub++;
		}
		i++;
	}
	return (nosub);
}

/*static char	*subs(char *s, char c)
{	
	char	*sub;

	while (s && *s != c)
	{
		sub = s;
		sub++;
		s++;	
	}
}
*/
static int	f_subslen(const char *s, int start, char del)
{
	int	size;

	size = 0;
	while (s[start] && s[start] != del)
	{
		size++;
		start++;
	}
	return (size);
}
char **ft_split(char const *s, char c)
{
	char	**ns;
	int	subslen;
	int	nosub;
	int	i;
	int	ii;

	i = 0;
	ii = -1;
	nosub = nosubstr(s, c);
	ns = (char **)malloc(sizeof(char *) * nosub);
	if (!ns || !s)
		return (NULL);
	while (ii++ < nosub)
	{
		while (s[i] == c)
			i++;
		subslen = f_subslen(s, i, c);
		ns[ii] = ft_substr(s, i, subslen);
		if (!ns[ii])
			return (NULL);
	//	free (ns[ii]);
		i += subslen;
	}
	return (ns);
}
