
# Variables

NAME = printest

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.a

INCDIR = /Users/odruke/Desktop/gitpriv/42projects/ft_printf

SRC = main.c

OBJ = main.o

# Rules for creating target files

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@ 
	make clean

$(OBJ): $(SRC) $(HEADER)
	$(CC) -c $< -o $@ -I$(INCDIR)

$(HEADER):
	cd $(INCDIR) && make

# Phony rules

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	cd $(INCDIR) && make fclean

re: fclean all
	cd $(INCDIR) && make re

.PHONY: clean fclean re
