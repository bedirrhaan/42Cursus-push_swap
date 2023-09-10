NAME	= push_swap.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

SRC 	=	push_swap.c\
			functions.c\
			rules_a.c\
			rules_b.c\
			rules.c\
			sort.c\
			sort_func.c\

OBJ		=	$(SRC:.c=.o)

all		:	$(NAME)

$(NAME) :	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re 		:	fclean $(NAME)

.PHONY	:	all clean fclean re
