/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:25:11 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/12 19:31:45 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_node *stack)
{
	int	min;

	min = stack->data;
	while (stack)
	{
		if (stack->data < min)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}