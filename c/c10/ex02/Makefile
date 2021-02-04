# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 09:11:07 by bledda            #+#    #+#              #
#    Updated: 2021/02/04 09:11:09 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_tail
SRCS	= ft_tail.c ft_strlen.c ft_putstr.c ft_atoi.c ft_strncmp.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	
			${CC} ${CFLAGS} ${SRCS} -Ift.h -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ft_tail

re:			fclean all
