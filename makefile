# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 17:20:49 by anaji-el          #+#    #+#              #
#    Updated: 2022/05/09 13:56:26 by anaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = push_swap.c check.c ft_strjoin.c ft_strlen.c ft_split.c add.c ft_atoi.c create.c sorting.c ft_putstr.c get_size.c sort_three.c get_max.c sort_five.c get_index.c get_min.c push.c put_error.c push_all_to_a.c radix_utils.c c_len.c sorted.c

CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf
NAME = push_swap
INC = push_swap.h
OCFILES = $(FILES:.c=.o)
all : $(NAME)
$(NAME) : $(INC) $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o push_swap
clean :
	$(RM) push_swap
fclean : clean
	$(RM) $(NAME)
re : fclean all