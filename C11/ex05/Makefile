# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alamonta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 15:24:26 by alamonta          #+#    #+#              #
#    Updated: 2020/10/01 15:33:57 by alamonta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.c fonction.c 
INC			= ft.h

OBJS		= ${SRCS:.c=.o}

NAME		= do-op
CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

c.o:
			${CC} ${CFLAGS} ${INC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
