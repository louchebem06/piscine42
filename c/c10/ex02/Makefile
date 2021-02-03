NAME	= ft_tail
SRCS	= ft_tail.c ft_strlen.c ft_putstr.c ft_atoi.c ft_strncmp.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	
			${CC} -o ${NAME} ${CFLAGS} ${SRCS} ft.h

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ft_tail

re:			fclean all