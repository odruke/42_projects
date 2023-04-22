/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:55:22 by odruke            #+#    #+#             */
/*   Updated: 2022/09/13 20:37:52 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{			
		write(1, &str[i], 1);
		i++;
	}	
}
/*
int	main(void)
{

	char	tab[] = "hello mom, im coding";
	ft_putstr(tab);
}
*/
