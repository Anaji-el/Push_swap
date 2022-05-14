/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:24:09 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/13 23:40:32 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
