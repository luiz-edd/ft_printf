NAME = libftprintf.a
CC = cc -Wall -Werror -Wextra -g3
SRC = $(addprefix $(MANDATORY_PATH), ft_printf.c ft_print_digit.c ft_print_char.c ft_print_pointer.c ft_print_str.c)

OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h
LIBFT = libft/libft.a
MANDATORY_PATH = ./mandatory/

all: $(NAME)

$(NAME): $(OBJ)

bonus: $(LIBFT)

$(LIBFT):
	 make -C libft && make bonus -C libft 
	 cp $(LIBFT) $(NAME)


$(MANDATORY_PATH)%.o: $(MANDATORY_PATH)%.c $(MANDATORY_PATH)$(HEADER)
	$(CC) $< -o $@ -c
	ar rcs $(MANDATORY_PATH)$(NAME) $@

clean:
	rm -f $(OBJ)
	rm -f $(LIBFT)$(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)$(OBJ)


re: fclean all

.PHONY: all clean fclean re

comp:
	$(CC) $(SRC) main.c && ./a.out