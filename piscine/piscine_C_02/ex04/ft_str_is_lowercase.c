/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:08:55 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 14:10:47 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (97 <= str[i] && str[i] <= 122)
	{
	i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char *test = "abc";
	char *test2 = "abc123";

	printf ("1 means only letters or empty:\n%d\n", ft_str_is_lowercase(test));
	printf ("0 means not only letterss:\n%d\n", ft_str_is_lowercase(test2));
	return (0);
}
*/
