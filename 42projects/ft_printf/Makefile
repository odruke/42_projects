# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druke <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 11:08:24 by druke             #+#    #+#              #
#    Updated: 2023/04/30 15:06:54 by odruke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = ft_printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = src

INCDIR = inc

LIB = libft.a

FILES = ft_printf 

HEADER = $(addprefix $(INCDIR)/, ft_printf.h)

SRC = $(addprefix $(SRCDIR)/, $(addsuffix .c,$(FILES)))

OBJ = $(SRC:.c=.o)

# Rules

ALL: $(NAME)

$(NAME): $(OBJ) $(LIB) 
	ar rcs $(NAME) $(OBJ) $(addprefix $(INCDIR)/, $(LIB))
	ranlib $(NAME)

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

