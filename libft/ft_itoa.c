/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:51:39 by druke             #+#    #+#             */
/*   Updated: 2023/03/08 12:41:54 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	flen(unsigned long int n)
{
	long int	len;

	len = 0;
	while (n > len)
		len = len + (n )
}

char	*ft_itoa(int n)
{
	char	*nc;
	size_t	len;

	len = flen(n);
	if(!*nc = malloc((sizeof char) * len))
		returnn (NULL);

}
