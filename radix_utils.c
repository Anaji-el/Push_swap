/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:02:44 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/10 22:11:38 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	radix_utils(t_node **stack_a, t_node **stack_b, int bite, int len)
{
	int	i;

	i = 0;
	while (i < bite)
	{
		while (len--)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				rotate(*stack_a, "ra");
			else
				push(stack_a, stack_b, "pb");
		}
		push_all_to_a(stack_a, stack_b);
		i++;
		len = get_size(*stack_a);
		// printf("the len is : %d \n ", len);
	}
}

void	sort_using_radix(t_node **stack_a, t_node **stack_b)
{ 
	int	len;
	int	bite;
	int	biggest;

	bite = 0;
	biggest = get_max(*stack_a);
	while ((biggest >> bite))
		bite++;
	// printf("the num of bites is : %d \n", bite);
	// exit(1);
	len = get_size(*stack_a);
	radix_utils(stack_a, stack_b, bite, len);
	push_all_to_a(stack_a, stack_b);
}