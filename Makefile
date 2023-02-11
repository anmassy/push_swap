# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 17:00:12 by anmassy           #+#    #+#              #
#    Updated: 2023/01/17 14:39:34 by anmassy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	rules/ft_push.c \
			rules/ft_rotate.c \
			rules/ft_reverse_rotate.c \
			rules/ft_swap.c \
			srcs/check.c \
			srcs/display.c \
			srcs/find_the_value.c \
			srcs/utils.c \
			srcs/small_sort.c \
			srcs/create_list.c \
			srcs/listsort.c \
			srcs/algo.c \
			main.c \

NAME	= push_swap

OBJ		= $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	gcc -g3 -Wall -Wextra -Werror -c $< -o ${<:.c=.o} -I ./includes
 
$(NAME):	$(OBJ)
			gcc -g3 -Wall -Wextra -Werror -o $(NAME) $(OBJ) -I ./includes


clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re