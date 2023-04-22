/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:14:38 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 14:12:07 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (65 <= str[i] && str[i] <= 90)
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
	char *test = "ABC";
	char *test2 = "Abc123";

	printf ("1 means only uppercase or empty:\n%d\n", ft_str_is_uppercase(test));
	printf ("0 means not only uppercase:\n%d\n", ft_str_is_uppercase(test2));
	return (0);
}
*/
