# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 09:33:29 by twang             #+#    #+#              #
#    Updated: 2022/12/15 11:14:13 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				push_swap

HEADERS =			push_swap.h
SOURCES =			push_swap.c	\
					parsing.c	\
					utils.c		\
					stack.c		\
					swap.c		\
					rotate.c	\
					rv_rotate.c	\
					push.c		\
					algo.c		\

LIBRARY =			libft/libft.a	
					
OBJECTS =			 ${SOURCES:.c=.o}

CFLAGS	= 			-Wall -Wextra -Werror -I .
DFLAGS	=			-g3 -fsanitize=address

all :	lib ${NAME}

%.o : %.c ${HEADERS} ${LIBRARY} Makefile
	${CC} ${CFLAGS} ${DFLAGS} -c $< -o $@

${NAME} : ${OBJECTS}
	${CC} ${CFLAGS} ${DFLAGS} ${LIBRARY} $^ -o $@

lib :
	${MAKE} -C ./libft

#debug :	CFLAGS += ${DFLAGS}
#debug :	re

clean :
	${MAKE} -C libft clean
	${RM} ${OBJECTS}

fclean : clean 
	${MAKE} -C libft fclean
	${RM} ${NAME}

re : fclean
	${MAKE} all

.PHONY: all clean fclean re lib debug
