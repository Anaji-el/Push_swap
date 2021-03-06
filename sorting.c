/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 06:48:00 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:24:05 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node *stack, char *str)
{
	int	tmp;

	if (!stack || !(stack->next))
		return ;
	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
	if (str)
		ft_putstr(str);
}

void	rotate(t_node *stack, char *str)
{
	if (!stack || !(stack->next))
		return ;
	while (stack)
	{
		swap(stack, 0);
		stack = stack->next;
	}
	if (str)
		ft_putstr(str);
}

void	r_rotate(t_node *stack, char *str)
{
	if (!stack || !(stack->next))
		return ;
	r_rotate(stack->next, 0);
	swap(stack, 0);
	if (!str)
		return ;
	if (str)
		ft_putstr(str);
}
