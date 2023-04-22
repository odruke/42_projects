/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:36:21 by odruke            #+#    #+#             */
/*   Updated: 2022/09/19 20:36:56 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			((str[i]) += 32);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char 	a[] = "MINUSCULAS minusculas 123 @";
	printf("%s", ft_strlowcase(a));
}
*/
