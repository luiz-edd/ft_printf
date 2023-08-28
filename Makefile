NAME = libftprintf.a
CC = cc -Wall -Werror -Wextra -g3
SRC = ft_princ.c main.c
OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)

%.o :%.c $(HEADER)
	$(CC) $< -o $@ -c
	ar rcs $(NAME) $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
