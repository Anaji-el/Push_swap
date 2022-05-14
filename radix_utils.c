/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:02:44 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:19:02 by anaji-el         ###   ########.fr       */
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
				rotate(*stack_a, "pb");
			else
				push(stack_a, stack_b, "ra");
		}
		push_all_to_a(stack_a, stack_b);
		i++;
		len = get_size(*stack_a);
	}
}

void	give_index_(t_node *stack, int index, int nb)
{
	while (stack)
	{
		if (nb == stack->data)
		{
			stack->index = index;
			break ;
		}
		stack = stack->next;
	}
}

void	give_indexs(t_node *stack, int len)
{
	int		*tab;
	int		i;
	t_node	*head;

	tab = malloc(sizeof(int) * len);
	head = stack;
	i = 0;
	while (head)
	{
		tab[i] = head->data;
		head = head->next;
		i++;
	}
	quick_sort(tab, 0, len - 1);
	i = 0;
	while (i < len)
	{
		give_index_(stack, i, tab[i]);
		i++;
	}
	free(tab);
}

void	sort_using_radix(t_node **stack_a, t_node **stack_b)
{
	int	len;
	int	bite;
	int	biggest;

	len = get_size(*stack_a);
	give_indexs(*stack_a, len);
	bite = 0;
	biggest = get_max(*stack_a);
	while ((biggest >> bite))
		bite++;
	radix_utils(stack_a, stack_b, bite, len);
	push_all_to_a(stack_a, stack_b);
}
