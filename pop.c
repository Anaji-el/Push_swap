/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:34:53 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/08 17:10:36 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop(t_node **stack)
{
	t_node	tmp;

	if (!stack || !*stack)
		return ;
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
}