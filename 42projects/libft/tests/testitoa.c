/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:12:48 by druke             #+#    #+#             */
/*   Updated: 2023/03/12 12:00:32 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int	main()
{
	int	max;
	int	min;
	int	reg;
	int	neg;
	int	cero;

	cero = 0;
	max = INT_MAX;
	min = INT_MIN	;
	reg = 123;
	neg = -321;
	printf("INT_MAX es \n-->%s<--\n", ft_itoa(max));
	printf("reg es \n-->%s<--\n", ft_itoa(reg));
	printf("neg es \n-->%s<--\n", ft_itoa(neg));
	printf("INT_MIN	 es \n-->%s<--\n", ft_itoa(min));
	printf("0 es \n-->%s<--\n", ft_itoa(cero));
}
