/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:24:09 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/11 22:58:10 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push(t_node **a, t_node **b, char *str)
// {
// 	t_node	*tmp;

// 	if (!b || !a || !*a)
// 		return ;
// 	tmp = (*a)->next;
// 	(*a)->next = (*b);
// 	*b = (*a);
// 	*b = tmp;
// 	if (str)
// 		ft_putstr(str);
// }

void	push(t_node **stack1, t_node **stack2, char *str)
{
	t_node	*tmp;

	if (!stack2 || !stack1 || !*stack1)
		return ;
	tmp = (*stack1)->next;
	(*stack1)->next = (*stack2);
	*stack2 = (*stack1);
	*stack1 = tmp;
	if (str)
		ft_putstr(str);
}

// void push(t_node **stack, t_node *new)
// {
//     if (!new || !stack)
//         return ;
//     new->next = *stack;
//     *stack = new;
// }
// void push_element(t_node *node,int value)
// {
// 	t_node *newnode;
// 	newnode = malloc(sizeof(t_node));
// 	newnode->data = value;
// 	newnode->next = NULL;
// 	newnode->next = node->data;
// 	node->data = newnode;
// }