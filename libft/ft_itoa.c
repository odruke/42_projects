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
	while(n > 0)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

/*static char	*str(char	*s, int n, unsigned long int len)
{
	
}
*/
char	*ft_itoa(int n)
{
	char	*nc;
	size_t	len;
	unsigned long int temp;

	temp = n;
	len = flen(n);
	if (n < 0)
		len++;
	if(!*nc = malloc((sizeof char) * (len + 1)))
		return (NULL);
	temp[len + 1] = '\0';
	while (temp > 0)
	{
		nc[len] = temp % 10;
		temp = temp / 10;
		len--;
	}
	if (n < 0)
		nc[len] = '-';
	return (*nc);
}
