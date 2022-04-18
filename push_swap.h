/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:46:17 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/18 12:46:31 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

// typedef struct	node;
// {
// 	int	number;
// 	struct node	*next;
// }t_node;

typedef struct s_node		t_node;
struct						s_node
{
	int						*node;
	int						size;
	int						in_use;
};

typedef struct s_stacks		t_stacks;
struct						s_stacks
{
	t_node					stack_a;
	t_node					stack_b;
};

int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		arg_valid(const char *str);
int		ft_isdigit(int n);
char	*args_to_string(const char **argv);

#endif