NAME = libftprintf.a
CC = cc -Wall -Werror -Wextra -g3
SRC = ft_printf.c
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
	rm $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re

comp:
	$(CC) $(SRC) main.c && ./a.out