/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:07:25 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:22:43 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **a, t_node **b)
{
	int	index;
	int	min;

	while (get_size(*a) > 3)
	{
		min = get_min(*a);
		index = get_index(*a, min);
		if (index > get_size(*a) / 2 && index <= get_size(*a))
		{
			r_rotate(*a, "rra");
			index++;
		}
		if (index <= get_size(*a) / 2 && index > 1)
		{
			rotate(*a, "ra");
			index--;
		}
		if (min == (*a)->data)
			push(a, b, "pb");
	}
	sort_three(a);
	push(b, a, "pa");
	push(b, a, "pa");
}
