/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:39:26 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 14:17:04 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z' && check == 0)
		{
			check = 1;
			((str[i]) -= 32);
		}
		else if ((check == 1) && ('A' <= str[i] && str[i] <= 'Z'))
			((str[i]) += 32);
		else if ('a' > str[i] || str[i] > 'z')
		{
			check = 0;
			if ('0' <= str[i] && str[i] <= '9')
				check = 1;
			else if ('A' <= str[i] && str[i] <= 'Z')
				check = 1;
		}	
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char 	a[] = "salut, Comment tu vas ? 
	42mots quarante-deux; cinquante+et+un COSAS ";
	printf("%s", ft_strcapitalize(a));
}
*/
