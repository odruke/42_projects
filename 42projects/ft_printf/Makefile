# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druke <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 11:08:24 by druke             #+#    #+#              #
#    Updated: 2023/05/10 06:51:09 by druke            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = ft_printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = src

INCDIR = inc

LIB = libft.a

FILES = ft_printf\
        ft_printchar\
        ft_printstr\
	ft_printnbr\
	ft_printptr\
	ft_printhex\


HEADER = $(addprefix $(INCDIR)/, ft_printf.h libft.h)

SRC = $(addprefix $(SRCDIR)/, $(addsuffix .c,$(FILES)))

OBJ = $(SRC:.c=.o)


# Rules

ALL: $(NAME)

$(NAME): $(LIB) $(OBJ) 
	mv $(addprefix $(INCDIR)/, $(LIB)) $(NAME)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR) 

$(LIB):
	make -C libft

$(HEADER): 
	cp libft/inc/libft.h $(INCDIR)

# Phony rules

clean: 
	rm -rf $(OBJ)
	make clean -C libft
	rm -f $(addprefix $(INCDIR)/, libft.h)

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all

.phony: clean fclean re

