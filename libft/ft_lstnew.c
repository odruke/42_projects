/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:25:05 by druke             #+#    #+#             */
/*   Updated: 2023/11/06 14:14:42 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (!new)
		return(NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
