/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:46:17 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/01 06:34:00 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}t_node;

// typedef struct s_stack
// {
// 	t_node	stack_a;
// 	t_node	stack_b;
// }t_stack;

int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		arg_valid(const char *str);
int		ft_isdigit(int n);
char	*args_to_string(const char **argv);
// int		is_duplicate(t_node *a);
int	is_duplicate(t_node *first, t_node *second);
int		get_size(t_node stack);
int		get_min(t_node *stack);
int		get_max(t_node *stack);
bool	sorted(t_node *stack);
void	fill_stack(t_node **stack, char *str);
void	add(t_node *node, t_node **stack);
t_node	*create(int n);

#endif