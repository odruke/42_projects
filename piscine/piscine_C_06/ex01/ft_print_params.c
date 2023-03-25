/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 00:55:37 by odruke            #+#    #+#             */
/*   Updated: 2022/09/22 17:55:50 by odruke           ###   ########.fr       */
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
	int	b;

	i = 1;
	while (i < ac)
	{
		b = 0;
		while (av[i][b] != '\0')
		{
			ft_putchar(av[i][b]);
			b++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
