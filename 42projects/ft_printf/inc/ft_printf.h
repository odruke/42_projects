/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:16:00 by odruke            #+#    #+#             */
/*   Updated: 2023/05/07 22:09:05 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "stdarg.h"
# include <stdio.h>
# include <unistd.h>
int	ft_printptr(int *ptr);
int	ft_printnbr(int i);
int	ft_printf(char *str, ...);
int	ft_printchar(int  c);
int	ft_printstr(char *str);

# endif
