/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:46:17 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/22 15:57:36 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		len;
}t_stack;

int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		arg_valid(const char *str);
int		ft_isdigit(int n);
char	*args_to_string(const char **argv);
char 	sorted(t_stack stack);
int		is_duplicate(int *array, int num, int len);

#endif