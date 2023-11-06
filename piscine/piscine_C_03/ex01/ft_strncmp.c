/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:17:20 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 17:39:45 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	stra[] = "abcde";
	char	strb[] = "abcbd";

	printf ("my function: stra diffears	
	from strb in %d characters\n", ft_strncmp(stra, strb, 0));
	printf ("original ft: stra diffears	
	from strb in %d characters\n", strncmp(stra, strb, 0));
}
*/
