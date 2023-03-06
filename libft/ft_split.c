/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:38:25 by druke             #+#    #+#             */
/*   Updated: 2023/03/05 14:12:38 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nosubstr(const char *s, char del)
{
	int	i;
	int	nosub;

	i = 0;
	while (s[i])
	{
		while (s[i])
		{
			if (s[i] != del)
				break;
			i++;
		}
		while (s[i])
		{
			if (s[i] == del)
				nsub++;
				break;
			i++;
		}
		i++;
	}
	return (nosub);
}

char **ft_split(char const *s, char c)
{
	char	**ns;
	int	nosub;

	nosub = nosubstr(s, c);
	if(!**ns = malloc(sizeof(char *) * nosub));
		return (NULL);
	while (s[i])
	{
		while (s[i])
		{
			if (s[i] != del)
				break;
			i++;
		}
		while (s[i])
		{
			i++;
		}
		i++;
	}
	return (ns);
}
//max 67
