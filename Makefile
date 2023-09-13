NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror

MANDATORY_HEADER =  ./mandatory/sources/ft_printf.h

PATH_MANDATORY_SRC = mandatory/sources/
PATH_MANDATORY_OBJ = mandatory/objects/

MANDATORY_SRC = $(addprefix $(PATH_MANDATORY_SRC), ft_printf.c ft_print_char.c ft_print_pointer.c ft_print_str.c ft_print_digit.c)
MANDATORY_OBJ = ${MANDATORY_SRC:$(PATH_MANDATORY_SRC)%.c=$(PATH_MANDATORY_OBJ)%.o}

# VPATH = mandatory


all: $(NAME)

$(NAME): $(MANDATORY_OBJ)

$(PATH_MANDATORY_OBJ)%.o: $(PATH_MANDATORY_SRC)%.c
	mkdir -p $(PATH_MANDATORY_OBJ)
	$(CC) $< -o $@ -c -I $(MANDATORY_HEADER)
	ar rcs $(NAME) $@

clean:
	rm -rf $(PATH_MANDATORY_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re