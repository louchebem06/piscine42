NAME		= rush-02
SRCS		= main.c ft_arg_main.c ft_strlen.c ft_real_unitaire.c ft_real_0.c ft_real_dizaine.c ft_palier_1_12.c ft_palier_13_24.c ft_palier_25_36.c ft_palier_37_39.c
OBJS		= ${SRCS:.c=.o}
HEADER		= header.h

CC			= cc
CFLAGS  	= -Wall -Wextra -Werror
RM			= rm -f


${NAME}:	${SRCS}
			${CC} -c ${CFLAGS} ${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
