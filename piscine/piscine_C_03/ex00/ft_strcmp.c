/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:10:50 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 16:03:24 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((s1[i] - s2[i]) == 0)
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}	
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	stra[] = "abcdg";
	char	strb[] = "abcfrg";

	printf ("my function: stra diffears from strb in %d
   	characters\n", ft_strcmp(stra, strb));
	printf ("original ft: stra diffears from strb in %d 
	characters\n", strcmp(stra, strb));
}
*/
