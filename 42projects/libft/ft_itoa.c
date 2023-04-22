/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:51:39 by druke             #+#    #+#             */
/*   Updated: 2023/03/12 12:01:19 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	flen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n < 0)
		n *= -1;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*array(char *nc, int n, int len)
{
	if (n == -2147483648)
	{
		nc[0] = '-';
		nc[1] = '2';
		n = 147483648;
		while (n > 0)
		{
			nc[len] = 48 + (n % 10);
			n /= 10;
			len--;
		}
	}
	while (n > 0)
	{
		nc[len] = 48 + (n % 10);
		n /= 10;
		len--;
	}
	return (nc);
}

char	*ft_itoa(int n)
{
	char	*nc;
	size_t	len;

	len = flen(n);
	if (n < 0)
		len++;
	nc = (char *)malloc(sizeof (char) * (len + 1));
	if (!nc)
		return (NULL);
	nc[len--] = '\0';
	if (n == 0)
		nc[0] = '0';
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		nc[0] = '-';
	}
	array(nc, n, len);
	return (nc);
}
