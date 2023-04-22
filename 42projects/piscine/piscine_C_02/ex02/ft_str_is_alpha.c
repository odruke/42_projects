/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:05:05 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 14:07:55 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
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
	char	*test = "abc";
	char	*test2 = "a2b3";
	
	printf ("1 means only letters:\n%d\n", ft_str_is_alpha(test));
	printf ("0 means not only letters:\n%d\n", ft_str_is_alpha(test2));
	return (0);
}
*/
