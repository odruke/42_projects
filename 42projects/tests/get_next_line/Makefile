#variables

NAME = getline

NAME2 = getbonus

CC = gcc

CFLAGS = -Wall -Werror -Wextra

BUFFER = -D BUFFER_SIZE=42

INCDIR = ../../get_next_line

HEADER = $(INCDIR)/get_next_line.h

HEADER = $(INCDIR)/get_next_line_bonus.h

FILES = main\
     $(addprefix $(INCDIR)/, get_next_line)\
     $(addprefix $(INCDIR)/, get_next_line_utils)

SRC = $(addsuffix .c,$(FILES),)

OBJ = $(SRC:.c=.o)

SRC2 = $(SRC:.c=_bonus.c)

OBJ2 = $(SRC:.c=_bonus.o)

#rules for creating target files

all: $(NAME)

ALL2: $(NAME2)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(BUFFER) $(OBJ) -o $@

$(NAME2): $(OBJ2) 
	$(CC) $(CFLAGS) $(BUFFER) $(OBJ2) -o $@

%.o: $(SRC) $(HEADER)
	$(CC) -c $< $(HEADER) -I $(INCDIR) -o $@

%_bonus.o: $(SRC2) $(HEADER2)
	$(CC) -c $< $(HEADER2) -I $(INCDIR) -o $@

# phony rules

clean:
	rm -f $(OBJ) $(OBJ2)


fclean:
	rm  -f $(NAME) $(NAME2)


re: fclean all

re2: fclean all2

.PHONY: clean fclean re re2
