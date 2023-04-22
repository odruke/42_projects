/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:20:18 by odruke            #+#    #+#             */
/*   Updated: 2022/09/19 20:29:06 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			((str[i]) -= 32);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char 	a[] = "mayusculas MAYUSCULAS";
	printf("%s", ft_strupcase(a));
}
*/
