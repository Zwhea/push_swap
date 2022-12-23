# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: twang <twang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 09:33:29 by twang             #+#    #+#              #
#    Updated: 2022/12/23 11:37:00 by twang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				push_swap

HEADERS =			push_swap.h
SOURCES =			push_swap.c				\
					parsing/arguments.c		\
					parsing/parsing.c		\
					stacks/init_stack.c		\
					stacks/create_stack.c	\
					stacks/utils_stack.c	\
					algorithm/algo_mini.c	\
					algorithm/algo_small.c	\
					algorithm/algo_big.c	\
					utils/array.c			\
					utils/checks.c			\
					utils/error.c			\
					actions/swap.c			\
					actions/rotate.c		\
					actions/rv_rotate.c		\
					actions/push.c			\

LIBRARY =			libft/libft.a	
					
OBJECTS =			 $(SOURCES:.c=.o)

CFLAGS	= 			-Wall -Wextra -Werror -I .
DFLAGS	=			-g3 -fsanitize=address

all :	lib $(NAME)

%.o : %.c $(HEADERS) $(LIBRARY)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(LIBRARY) $^ -o $@

lib :
	$(MAKE) -C ./libft

clean :
	$(MAKE) -C libft clean
	$(RM) $(OBJECTS)

fclean : clean 
	$(MAKE) -C libft fclean
	$(RM) $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all clean fclean re lib
