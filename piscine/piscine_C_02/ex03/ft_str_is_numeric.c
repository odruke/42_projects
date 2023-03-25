/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:46:09 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 14:09:31 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (48 <= str[i] && str[i] <= 57)
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
	char *test = "123";
	char *test2 = "abc123";

	printf ("1 means only numbers or empty:\n%d\n", ft_str_is_numeric(test));
	printf ("0 means not only numbers:\n%d\n", ft_str_is_numeric(test2));
	return (0);
}
*/
