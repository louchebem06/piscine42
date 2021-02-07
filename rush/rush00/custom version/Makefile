# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 16:37:11 by bledda            #+#    #+#              #
#    Updated: 2021/02/07 17:59:38 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush00
SRCS	= ft_atoi.c ft_putstr.c main.c line.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

start:
			@echo "Please input rush file"
			@echo "rush00, rush01, rush02, rush03, rush04"
			@echo "Exemple : make rush02"
			@echo "Exe name file is : rush00"

${NAME}:	
			${CC} ${CFLAGS} ${SRCS} rush00.c ft.h -o ${NAME}

rush00:		${NAME}

rush01:	
			${CC} ${CFLAGS} ${SRCS} rush01.c ft.h -o ${NAME}

rush02:	
			${CC} ${CFLAGS} ${SRCS} rush02.c ft.h -o ${NAME}

rush03:	
			${CC} ${CFLAGS} ${SRCS} rush03.c ft.h -o ${NAME}

rush04:	
			${CC} ${CFLAGS} ${SRCS} rush04.c ft.h -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}