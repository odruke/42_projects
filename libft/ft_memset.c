/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:01:30 by odruke            #+#    #+#             */
/*   Updated: 2022/11/11 10:39:43 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char *p;
	unsigned int i;

	p = (unsigned char *)b;
	i = 0;

	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
