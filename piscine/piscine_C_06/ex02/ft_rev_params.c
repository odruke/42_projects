/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:17:54 by odruke            #+#    #+#             */
/*   Updated: 2022/09/22 12:18:50 by odruke           ###   ########.fr       */
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

	i = 0;
	while (i < ac -1)
	{
		i++;
	}
	while (i != 0)
	{
		b = 0;
		while (av[i][b] != '\0')
		{
			ft_putchar(av[i][b]);
			b++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
