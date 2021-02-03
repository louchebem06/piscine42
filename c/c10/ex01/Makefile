NAME	= ft_cat
SRCS	= ft_cat.c
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
			${RM} ft_cat

re:			fclean all