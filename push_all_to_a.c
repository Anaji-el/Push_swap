/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:37:38 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/08 22:54:45 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_to_a(t_node **stack_a, t_node **stack_b)
{
	while (*stack_b != NULL)
		push(stack_b, stack_a,NULL);
}
