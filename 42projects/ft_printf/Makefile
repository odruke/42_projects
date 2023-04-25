# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druke <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 11:08:24 by druke             #+#    #+#              #
#    Updated: 2023/04/25 22:19:37 by odruke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = ft_printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = src

INCDIR = inc

LIB = libft.a

FILES = 

HEADER = $(addprefix $(INCDIR)/, $(LIB) ft_printf.h)

SRC = $(addprefix $(SRCDIR)/,$(addsuffix .c,$(FILES))

OBJ = $(SRC:.c=.o)

# Rules

ALL: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $<
	ranlib $@
	make clean

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

$(LIB):
	make -C libft

# Phony rules

clean: 
	rm -rf $(OBJ)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all

.phony: clean fclean re

