NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror

MANDATORY_HEADER =  ./mandatory/sources/ft_printf.h
BONUS_HEADER = ./bonus/sources/ft_printf_bonus.h

PATH_MANDATORY_SRC = mandatory/sources/
PATH_MANDATORY_OBJ = mandatory/objects/

PATH_BONUS_SRC = bonus/sources/
PATH_BONUS_OBJ = bonus/objects/

SRC = ft_eval_format.c ft_print_char.c ft_print_digit.c ft_print_ex_up.c ft_print_ex.c \
ft_print_pointer.c ft_print_str.c ft_print_unsigned.c ft_printf.c ft_print_utils.c

SRC_B = ft_eval_format_bonus.c ft_print_char_bonus.c ft_print_digit_bonus.c ft_print_ex_up_bonus.c ft_print_ex_bonus.c \
ft_print_pointer_bonus.c ft_print_str_bonus.c ft_print_unsigned_bonus.c ft_printf_bonus.c ft_print_utils_bonus.c

MANDATORY_SRC = $(addprefix $(PATH_MANDATORY_SRC), $(SRC))
MANDATORY_OBJ = ${MANDATORY_SRC:$(PATH_MANDATORY_SRC)%.c=$(PATH_MANDATORY_OBJ)%.o}

BONUS_SRC = $(addprefix $(PATH_BONUS_SRC), $(SRC_B))
BONUS_OBJ = ${BONUS_SRC:$(PATH_BONUS_SRC)%.c=$(PATH_BONUS_OBJ)%.o}

all: $(NAME)

$(NAME): $(MANDATORY_OBJ)

$(PATH_MANDATORY_OBJ)%.o: $(PATH_MANDATORY_SRC)%.c $(MANDATORY_HEADER)
	mkdir -p $(PATH_MANDATORY_OBJ)
	$(CC) $< -o $@ -c -I $(MANDATORY_HEADER)
	ar rcs $(NAME) $@

bonus: $(BONUS_OBJ)

$(PATH_BONUS_OBJ)%.o: $(PATH_BONUS_SRC)%.c $(BONUS_HEADER)
	mkdir -p $(PATH_BONUS_OBJ)
	$(CC) $< -o $@ -c -I $(BONUS_HEADER)
	ar rcs $(NAME) $@

clean:
	rm -rf $(PATH_MANDATORY_OBJ) $(PATH_BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re