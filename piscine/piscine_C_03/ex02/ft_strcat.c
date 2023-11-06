/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:30:19 by odruke            #+#    #+#             */
/*   Updated: 2022/09/19 21:50:22 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i2 = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0')
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
	char dest1[14] = "no puedo ";
	char dest2[4] = "mas";

	printf ("%s", ft_strcat(dest1, dest2));
}
*/
