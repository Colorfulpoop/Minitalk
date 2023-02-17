NAME = libftprintf.a

SRCS = 	ft_printf.c \
		ft_printhex.c \
		ft_utils_nb.c \
		ft_utils_pointer.c \
		ft_utils_udecimal.c \

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
