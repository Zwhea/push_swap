# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 09:33:29 by twang             #+#    #+#              #
#    Updated: 2022/12/19 22:37:57 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				push_swap

HEADERS =			push_swap.h
SOURCES =			push_swap.c				\
					parsing/parsing.c		\
					parsing/arguments.c		\
					utils/array.c			\
					utils/checks.c			\
					utils/error.c			\
					stacks/create_stack.c	\
					stacks/init_stack.c		\
					stacks/utils_stack.c		\
					actions/swap.c			\
					actions/rotate.c		\
					actions/rv_rotate.c		\
					actions/push.c			\
					algorithm/algo_mini.c	\
					algorithm/algo_small.c	\
					algorithm/sort.c		\

LIBRARY =			libft/libft.a	
					
OBJECTS =			 $(SOURCES:.c=.o)

CFLAGS	= 			-Wall -Wextra -Werror -I .
DFLAGS	=			-g3 -fsanitize=address

all :	lib $(NAME)

%.o : %.c $(HEADERS) $(LIBRARY)
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(DFLAGS) $(LIBRARY) $^ -o $@

lib :
	$(MAKE) -C ./libft

#debug :	CFLAGS += $(DFLAGS)
#debug :	re

clean :
	$(MAKE) -C libft clean
	$(RM) $(OBJECTS)

fclean : clean 
	$(MAKE) -C libft fclean
	$(RM) $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all clean fclean re lib debug
