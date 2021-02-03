# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 16:37:11 by bledda            #+#    #+#              #
#    Updated: 2021/01/29 07:50:15 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_display_file.c
OBJS	= $(addprefix ./srcs/, ${SRCS:.c=.o})
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_display_file

.c.o:	${CC} ${CFLAGS} -c -o ${<:.c=.o}
all:		${NAME}
${NAME}:	${OBJS}
			ar rc ft_display_file ${OBJS}		
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
.PHONY:		all clean fclean ft_display_file