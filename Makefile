NAME		= printf

SRCS		= test/main.c src/ft_printf.c src/ft_putchar_fd.c

FLAGS		= -Wall -Werror -Wextra

CC			= gcc

OBJS		= ${SRCS:.c=.o}

all			: $(NAME)

${NAME} 	: $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean		:
	rm -f $(OBJS)

fclean		: clean
	rm -f $(NAME)

re 			: fclean all

.PHONY		: all clean fclean re
