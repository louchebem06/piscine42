NAME	= ft_display_file
SRCS	= ft_display_file.c
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
			${RM} ft_display_file

re:			fclean all