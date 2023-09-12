NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror -g3
HEADER =  ft_printf.h
SRC = ft_printf.c ft_printf_utils.c main.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $< -o $@ -c
	ar rcs $(NAME) $@

clean:
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
