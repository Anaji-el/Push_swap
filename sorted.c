/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:56:19 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/13 16:47:12 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}