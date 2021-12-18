NAME	= libftprintf.a

SRCS	= src/ft_printf.c src/ft_putchar.c src/ft_check_format.c \
		src/ft_putstr.c src/ft_putnbr.c src/ft_putnbr_hexa.c

CFLAGS	= -Wall -Werror -Wextra

CC		= gcc

OBJS	= ${SRCS:.c=.o}

all		: $(NAME)

%.o		: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLD_DIR)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean 	:
	rm -f $(SRCS:.c=.o)

fclean	: clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
