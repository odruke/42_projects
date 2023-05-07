/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:16:00 by odruke            #+#    #+#             */
/*   Updated: 2023/05/06 18:31:04 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_printf.h"
# include "stdarg.h"
int	ft_printf(char *str, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);

# endif
