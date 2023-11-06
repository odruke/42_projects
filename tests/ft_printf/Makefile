
# Variables

NAME = printest

CTEST = ctest 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCDIR = ../../ft_printf/inc

LIBDIR = ../../ft_printf

HEADER = $(addprefix $(INCDIR)/, ft_printf.h)

LIB = $(addprefix $(LIBDIR)/, libftprintf.a)

SRC = main.c

SRC2 = mainc.c

OBJ = main.o

OBJ2 = mainc.o
# Rules for creating target files

all: $(NAME)

$(CTEST): $(OBJ2) $(LIB)
	$(CC) $(CFLAGS) $(OBJ2) $(LIB) -o $@

$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $@ 

$(OBJ): $(SRC) $(HEADER) 
	$(CC) -c $< -o $@ -I$(INCDIR)

$(OBJ2): $(SRC2) $(HEADER)
	$(CC) -c $< -o $@ -I$(INCDIR)

$(LIB):
	cd $(LIBDIR) && make
	chmod +x $(LIB)

# Phony rules

clean:
	rm -f $(OBJ)
	rm -f $(OBJ2)

fclean: clean
	rm -f $(NAME)
	cd $(LIBDIR) && make fclean
	rm -f $(CTEST)

re: fclean all
	cd $(LIBDIR) && make re

.PHONY: clean fclean re
