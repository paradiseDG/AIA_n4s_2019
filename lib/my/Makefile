##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_printf.c \
		my_puterror.c \
		read.c \
		my_str_to_word_array.c \
		my_show_word_array.c \
		my_strncpy.c \
		my_strcpy.c \
		my_strclone.c \
		my_atoi.c \
		my_realloc.c \
		destroy_array.c \
		my_strcmp.c \
		my_strcat.c \
		my_strdup.c \
		my_second_word_array.c

OBJ	=	$(SRC:.c=.o)

NAME    =       libmy.a

CC	=	ar rc

RM	=	rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	$(CC) $(NAME) *.o

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all













