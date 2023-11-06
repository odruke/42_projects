/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:09:44 by odruke            #+#    #+#             */
/*   Updated: 2022/09/17 21:56:13 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	a[]	= "abc";
	char	b[] = {12, 24, '\0'};

	printf("1 means printable: \n%d\n", ft_str_is_printable(a));
	printf("0 means unprintable: \n%d\n", ft_str_is_printable(b));
	return (0);
}
*/
