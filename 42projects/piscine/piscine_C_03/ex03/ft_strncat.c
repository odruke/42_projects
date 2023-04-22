/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:41:32 by odruke            #+#    #+#             */
/*   Updated: 2022/09/18 19:56:10 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i2 = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[i2] != '\0') && (i2 != nb))
	{
		dest[i] = src[i2];
		i2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char dest1[20] = "123";
	char dest2[4] = "456";

	printf ("%s", ft_strncat(dest1, dest2, 2));
}
*/
