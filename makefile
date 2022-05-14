# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 17:20:49 by anaji-el          #+#    #+#              #
#    Updated: 2022/05/14 22:08:44 by anaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = push_swap
BONUS = checker

FILES = check.c ft_strjoin.c ft_strlen.c ft_split.c add.c ft_atoi.c create.c sorting.c \
ft_putstr.c get_size.c sort_three.c get_max.c sort_five.c get_index.c get_min.c push.c \
put_error.c push_all_to_a.c radix_utils.c sorted.c giving_index.c pop.c quick_sort.c
PS = push_swap.c
OBJ = $(FILES:.c=.o)
BONUS_FILES = gnl/ft_memcmp.c gnl/actions.c gnl/checker.c gnl/get_next_line.c gnl/get_next_line_utils.c
BONUS_OBJ = $(BONUS_FILES:.c=.o)

.PHONY: all fclean clean re
all: ${NAME}


${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} ${PS} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${FLAGS} -c $< -o $@

bonus: ${BONUS_OBJ}
	${CC} ${FLAGS} ${BONUS_OBJ} ${FILES} -o ${BONUS}
clean:
	${RM} ${OBJ}
	${RM} ${OBJ} ${BONUS_OBJ}
	
fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS}
re: fclean all