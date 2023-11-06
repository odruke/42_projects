/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:41:47 by odruke            #+#    #+#             */
/*   Updated: 2022/09/22 00:54:34 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (i < ac)
	{
		while (av[0][i] != '\0')
		{
			ft_putchar(av[0][i]);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
