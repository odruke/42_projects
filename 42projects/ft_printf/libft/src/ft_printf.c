/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:48:00 by druke             #+#    #+#             */
/*   Updated: 2023/04/04 16:29:37 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fnvar(char *s)
{
	int     count;
	int     i;

	count = 0;
	i = -1;
	while (s[++i])
	if ((s[i] != '%') && (i == 0 || '%' == s[i - 1]))
		count++;
	return (count);
}

void	fputstr(char *s)
{
	int	i;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
//char	*print(S,...)
int	main(int ac, char **av)
{
	if (ac > 1)
	{
//	char	str[6] = "hello";
//	int	nvar;
//	nvar = fnvar(str);
//	printf("%s\n", str);
//	printf("%d\n", nvar);
	fputstr(av[1]);
	}

}
