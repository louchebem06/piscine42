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

NAME	= libft.a
SRCS	= $(addprefix ${FOLDER}/, ft_putchar.c ft_strlen.c ft_swap.c ft_putstr.c ft_strcmp.c)
OBJS	= ${SRCS:.c=.o}
HEADER  = includes
FOLDER 	= srcs

CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} libft.a

re:			fclean all