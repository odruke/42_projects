/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:18:04 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 14:06:01 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	while ((src[i] != '\0') && (i != n))
	{
		dest[i] = src[i];
		i++;
	}
	i2 = i;
	while (i2 != n)
	{
		dest[i2] = '\0';
		i2++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char desti[20] = "";
	char sourc[] = "copia hasta aqui no esto";

	printf("my function:\n%s\n", ft_strncpy(desti, sourc, 16));
	printf("original function:\n%s\n", strncpy(desti, sourc, 16));

}
*/
