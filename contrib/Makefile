NAME 	= libftprintf.a

SRCS 	= ft_printf.c

CFLAGS 	= -Wall -Werror -Wextra -c
CC		= gcc

OBJS 	= ${SRCS:.c=.o}

INCLUDES = -I ./inc


all		: ${NAME}

%.o		:%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLD_DIR)

	/// ‘$<’ variable auto qui renvoie a la dependance ‘$@’ variable automatique qui renvoie a la target (la regle);
$(NAME):	$(OBJS)
		///$(MAKE) bonus -C ./libft  ICI le  "-C" fait
		cp libft/libft.a $(NAME)
		$(CC) -c $(FLAGS) $(INCLUDES) $(SRCS)
		ar -rcs $(NAME) $(OBJS)

SRCS =		ft_printf.c \
			sources/ft_process_char.c \
			sources/ft_process_string.c \
			sources/ft_process_ptr.c \
			sources/ft_process_u.c \
			sources/ft_process_id.c \
			sources/ft_process_hexa.c \
			sources/ft_process_prcnt.c \


$(NAME)	: $(OBJS)
	ar rcs $(NAME)

clean	:
	rm -f $(SRCS:.c=.o)

fclean	: clean
	rm -f $(NAME)

re 		: fclean all

.PHONY : all clean fclean re
