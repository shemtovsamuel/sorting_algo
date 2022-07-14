##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## build my_hunter project
##

SRC = 	sources/function_1.c \
		sources/function_2.c \
		sources/function_3.c \
		sources/main.c \
		sources/util.c \

OBJ = $(SRC:.c=.o)

NAME = push_swap

CFLAGS += -I./ -Wall

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
.PHONY: all clean fclean re
