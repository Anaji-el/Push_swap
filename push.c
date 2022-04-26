/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:24:09 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/26 02:50:37 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_node **stack, t_node *new)
{
    if (!new || !stack)
        return ;
    new->next = *stack;
    *stack = new;
}
void push_element(t_node *node,int value)
{
	t_node *newnode;
	newnode = malloc(sizeof(t_node));
	newnode->data = value;
	newnode->next = NULL;
	newnode->next = node->data;
	node->data = newnode;
}