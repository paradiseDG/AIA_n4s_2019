##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c  \
		src/do_my_ai.c  \
		src/turn_stop.c \
		src/turn_loop.c \
		src/create_my_array_of_lidars.c

OBJ	=	$(SRC:.c=.o)

NAME	=	ai

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -I ./include

RM	=	rm -f

ifeq    ($(debug), 1)
	CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) -L./lib/my -lmy

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all
