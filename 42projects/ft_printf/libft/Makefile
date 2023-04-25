# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druke <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 20:24:30 by druke             #+#    #+#              #
#    Updated: 2023/04/25 21:42:13 by odruke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = $(addprefix $(INCDIR)/, libft.h)

SRCDIR = src

INCDIR = inc

LIBDIR = /Users/odruke/Desktop/gitpriv/42projects/ft_printf/inc/

SRC = $(addprefix $(SRCDIR)/, ft_isalpha.c\
      ft_isdigit.c\
      ft_isascii.c\
      ft_isalnum.c\
      ft_isprint.c\
      ft_strlen.c\
      ft_memset.c\
      ft_bzero.c\
      ft_memcpy.c\
      ft_memmove.c\
      ft_strlcpy.c\
      ft_toupper.c\
      ft_tolower.c\
      ft_strchr.c\
      ft_strrchr.c\
      ft_strlcat.c\
      ft_memchr.c\
      ft_strncmp.c\
      ft_strnstr.c\
      ft_atoi.c\
      ft_calloc.c\
      ft_strdup.c\
      ft_substr.c\
      ft_strjoin.c\
      ft_strtrim.c\
      ft_memcmp.c\
      ft_itoa.c\
      ft_split.c\
      ft_strmapi.c\
      ft_striteri.c\
      ft_putchar_fd.c\
      ft_putstr_fd.c\
      ft_putendl_fd.c\
      ft_putnbr_fd.c)


OBJ = $(SRC:.c=.o)


all: $(NAME)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

$(NAME): $(OBJ)
	ar rcs $(LIBDIR)/$(NAME) $(OBJ)
	ranlib $(LIBDIR)/$(NAME)
	make clean
 
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBDIR)/$(NAME)

re: fclean all

.PHONY: clean fclean re
