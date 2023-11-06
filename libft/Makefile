# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druke <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 20:24:30 by druke             #+#    #+#              #
#    Updated: 2023/11/06 14:49:38 by druke            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
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
      ft_putnbr_fd.c\


OBJS = ft_isalpha.o\
       ft_isdigit.o\
       ft_isascii.o\
       ft_isalnum.o\
       ft_isprint.o\
       ft_strlen.o\
       ft_memset.o\
       ft_bzero.o\
       ft_memcpy.o\
       ft_memmove.o\
       ft_strlcpy.o\
       ft_toupper.o\
       ft_tolower.o\
       ft_strchr.o\
       ft_strrchr.o\
       ft_strlcat.o\
       ft_memchr.o\
       ft_strncmp.o\
       ft_strnstr.o\
       ft_atoi.o\
       ft_calloc.o\
       ft_strdup.o\
       ft_substr.o\
       ft_strjoin.o\
       ft_strtrim.o\
       ft_memcmp.o\
       ft_itoa.o\
       ft_split.o\
       ft_strmapi.o\
       ft_striteri.o\
       ft_putchar_fd.o\
       ft_putstr_fd.o\
       ft_putendl_fd.o\
       ft_putnbr_fd.o\

BSRC = ft_lstnew.c\
       ft_lstadd_front.c\
       ft_lstsize.c\
       ft_lstlast.c\

BOBJS = ft_lstnew.o\
	ft_lstadd_front.o\
	ft_lstsize.c\
	ft_lstlast.o\

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)
 
bonus: $(NAME) $(BOBJS) 
	$(CC) $(CFLAGS) -c $(BSRC)
	ar rcs $(NAME) $(BOBJS)
	ranlib $(NAME)
clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

