
# Variables

NAME = printest

CTEST = ctest 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.a

INCDIR = /Users/odruke/Desktop/gitpriv/42projects/ft_printf

SRC = main.c

SRC2 = mainc.c

OBJ = main.o

OBJ2 = mainc.o
# Rules for creating target files

all: $(NAME)

$(CTEST): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ2) -o $@ 
	make clean

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@ 
	make clean

$(OBJ): $(SRC) $(HEADER)
	$(CC) -c $< -o $@ -I$(INCDIR)

$(OBJ2): $(SRC2) $(HEADER)
	$(CC) -c $< -o $@ -I$(INCDIR)

$(HEADER):
	cd $(INCDIR) && make

# Phony rules

clean:
	rm -f $(OBJ)
	rm -f $(OBJ2)

fclean: clean
	rm -f $(NAME)
	cd $(INCDIR) && make fclean
	rm -f $(CTEST)

re: fclean all
	cd $(INCDIR) && make re

.PHONY: clean fclean re
