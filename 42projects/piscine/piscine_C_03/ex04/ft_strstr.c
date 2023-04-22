/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:18:58 by odruke            #+#    #+#             */
/*   Updated: 2022/09/20 17:48:28 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			b++;
			if (to_find[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("neddle is empty:\n%s\n", ft_strstr("1234", ""));
	printf("didn't find neddle:\n%s\n", ft_strstr("1234", "5"));
	printf("neddle finded:\n%s\n", ft_strstr("find here is the needle", "here"));
}
*/
