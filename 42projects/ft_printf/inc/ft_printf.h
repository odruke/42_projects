/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:16:00 by odruke            #+#    #+#             */
/*   Updated: 2023/05/08 21:06:10 by odruke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "stdarg.h"
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
int	ft_printptr(unsigned long long *ptr);
int	ft_printnbr(int i);
int	ft_printf(char *str, ...);
int	ft_printchar(int  c);
int	ft_printstr(char *str);

# endif
