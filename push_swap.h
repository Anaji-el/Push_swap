/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:46:17 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:09:04 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

typedef struct s_list
{
	void			*ptr;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr(char *str);
int		ft_memcmp(const char *s1, const char *s2, int n);
int		arg_valid(const char *str);
int		ft_isdigit(int n);
char	*args_to_string(const char **argv);
int		is_duplicate(t_node *node, int num);
int		get_size(t_node *stack);
void	rotate(t_node *stack, char *str);
int		get_min(t_node *stack);
void	push(t_node **stack1, t_node **stack2, char *str);
int		get_max(t_node *stack);
bool	sorted(t_node *stack);
void	fill_stack(t_node **stack, char *str);
void	add(t_node *node, t_node **stack);
void	pop(t_node **stack);
t_node	*create(int n);
int		get_index(t_node *stack, int nm);
void	r_rotate(t_node *stack, char *str);
void	swap(t_node *stack, char *str);
void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	put_error(char *msg);
void	sort_using_radix(t_node **stack_a, t_node **stack_b);
void	push_all_to_a(t_node **stack_a, t_node **stack_b);
void	give_index(t_node **stack, long long *check);
int		compare(t_node *stack, int data);
int		get_m(t_node *stack);
void	free_all(t_node **stack);
void	apply_actions(t_node **a, t_node **b);
void	quick_sort(int *array, int start, int end);
#endif