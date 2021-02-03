# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 16:37:11 by bledda            #+#    #+#              #
#    Updated: 2021/02/03 11:50:41 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_tail
SRCS	= ft_tail.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	
			${CC} -o ${NAME} ${CFLAGS} ${SRCS} -I ft.h

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ft_tail

re:			fclean all