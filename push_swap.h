/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:46:17 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/06 20:21:46 by anaji-el         ###   ########.fr       */
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
void	ft_putstr(char *str);
int		arg_valid(const char *str);
int		ft_isdigit(int n);
char	*args_to_string(const char **argv);
int		is_duplicate(t_node *node, int num);
int		get_size(t_node *stack);
int		get_min(t_node *stack);
int		get_max(t_node *stack);
bool	sorted(t_node *stack);
void	fill_stack(t_node **stack, char *str);
void	add(t_node *node, t_node **stack);
t_node	*create(int n);
int	get_index(t_node *stack, int nm);
void	r_rotate(t_node *stack, char *str);
void	swap(t_node *stack, char *str);
void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	rotate(t_node *stack, char *str);
void	push(t_node **stack1, t_node **stack2, char *str);
#endif