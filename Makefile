NAME = push_swap

BONUS_NAME = checker

LIBFT = libft

LIBFTM = libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CFILES_1 = push_swap.c

CFILES_2 = functions.c \
			sort.c \
			sort_func.c \
			rules_a.c \
			rules_b.c \
			rules.c

BONUS_FILES = checker.c get_next_line.c

OBJS_1 = $(CFILES_1:.c=.o)

OBJS_2 = $(CFILES_2:.c=.o)

BONUS_OBJS = $(BONUS_FILES:.c=.o)


$(NAME): $(OBJS_1) $(OBJS_2)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_1) $(OBJS_2) $(LIBFTM) -o $(NAME)

$(BONUS_NAME): $(BONUS_OBJS) $(OBJS_2)
	$(CC) $(CFLAGS) $(BONUS_OBJS) $(OBJS_2) $(LIBFTM) -o $(BONUS_NAME)

all: $(NAME) $(BONUS_NAME)

bonus: ${BONUS_NAME}

clean:
		rm -f $(OBJS_1) $(OBJS_2) $(BONUS_OBJS)
		make clean -C $(LIBFT)

fclean: clean
		make fclean -C $(LIBFT)
		rm -rf $(NAME) $(BONUS_NAME)

re: fclean all

