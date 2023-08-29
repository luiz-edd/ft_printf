NAME = libftprintf.a
CC = cc -Wall -Werror -Wextra -g3
SRC = ft_printf.c ft_print_digit.c ft_print_char.c ft_print_pointer.c ft_print_str.c
OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $< -o $@ -c
	ar rcs $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

comp:
	$(CC) $(SRC) main.c && ./a.out