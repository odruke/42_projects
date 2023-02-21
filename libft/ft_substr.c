/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:01:33 by druke             #+#    #+#             */
/*   Updated: 2023/02/21 20:31:52 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s) // cadena vacia
		return (NULL); 
	if ((size_t)start > ft_strlen(s)) // start fuera de la candena devuelve cadena vacia
		return (s = (char *)ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) < len) //acotar len si queda fuera
		len = ft_strlen(s + start); 
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
