# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druke <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 11:08:24 by druke             #+#    #+#              #
#    Updated: 2023/04/23 20:07:25 by odruke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = ft_printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = src

INCDIR = inc

HEADER = $(addprefix $(INCDIR)/, ft_printf.h)

SRC = $(addprefix $(SRCDIR)/, )

OBJ = $(SRC:.c=.o)

# Rules

ALL: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	make clean

$(SRCDIR)/%.o: $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

# Phony rules

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.phony: clean fclean re

