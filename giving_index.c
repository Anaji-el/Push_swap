/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   giving_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:37:18 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/11 21:31:20 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare(t_node *stack, int data)
{
	t_node	*tmp;
	int		index;

	index = 0;
	tmp = stack->next;
	if (tmp->data == data)
		return (-1);
	if (tmp->data < data)
		index++;
	tmp = tmp->next;
	while (tmp != stack)
	{
		if (tmp->data == data)
			return (-1);
		if (tmp->data < data)
			index++;
		tmp = tmp->next;
	}
	return (index);
}

void	give_index(t_node **stack, long long *check)
{
	t_node	*tmp;
	int		index;

	tmp = (*stack)->next;
	index = compare(tmp, tmp->data);
	tmp->index = index;
	tmp = tmp->next;
	while (tmp != (*stack)->next)
	{
		index = compare(tmp, tmp->data);
		if (index == -1)
		{
			*check = index;
			return ;
		}
		tmp->index = index;
		tmp = tmp->next;
	}
}