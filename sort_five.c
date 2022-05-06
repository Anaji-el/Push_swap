/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:07:25 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/06 20:22:19 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **a, t_node **b)
{
	int index;
	int min;
	int size;
	
	size = get_size(*a);
	
	while (size > 3)
	{
		min = get_min(*a);
		index = get_index(*a,min);
		if ( index > size / 2 && index <= size)
			{
				r_rotate(*a, "rra");
				index++;
			}
		if ( index <= size / 2 && index > 1)
			{
				rotate(*a, "ra");
				index--;
			}
		if (min == (*a)->data)
		{
			push(a, b, "pb");
			size--;
		}
	}
	sort_three(a);
	push(b,a,"pa");
	push(b,a,"pa");
}