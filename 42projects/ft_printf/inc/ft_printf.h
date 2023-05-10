/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:16:00 by odruke            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/10 06:50:41 by druke            ###   ########.fr       */
=======
/*   Updated: 2023/05/09 21:20:17 by odruke           ###   ########.fr       */
>>>>>>> 474f25efc0cbf9ed336d9221c938690a43204dbb
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printptr(unsigned long long ptr);
int	ft_printnbr(int i);
int	ft_printf(char *str, ...);
int	ft_printchar(int  c);
int	ft_printstr(char *str);
int	ft_printhex(int i);

# endif
