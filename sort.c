/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:04:00 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/10 19:04:17 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*get_sorted(t_node *stack, int size, t_list **garbage)
{
	int	*sorted;
	int	i;

	sorted = malloc(size * sizeof(int));
	add_garbge(sorted, garbage);
	i = 0;
	while (stack)
	{
		sorted[i++] = stack->number;
		stack = stack->next;
	}
	quick_sort(sorted, 0, size - 1);
	return (sorted);
}

void	back_maxs_from_b_in_chunks(t_node **a, t_node **b, t_list **garbage)
{
	int	*sorted;
	int	size;
	int	tmp;
	int	mid;

	size = get_size(*b);
	sorted = get_sorted(*b, size, garbage);
	while (*b)
	{
		tmp = size;
		mid = sorted[size / 2];
		while (tmp--)
		{
			if ((*b)->number >= mid || size < 3)
			{
				push(b, a, "pa");
				size--;
			}
			else
				rotate(*b, "rb");
		}
	}
}

void	back_maxs_from_b(t_node **a, t_node **b, t_list **garbage, int size2)
{
	int	max;
	int	size;

	size = get_size(*b);
	while (*b && size > size2)
	{
		max = get_max(*b);
		while ((*b)->number != max)
		{
			if (is_in_bottom(max, size, *b))
				reverse_rotate(*b, "rrb");
			else
				rotate(*b, "rb");
		}
		push(b, a, "pa");
		size--;
	}
	back_maxs_from_b_in_chunks(a, b, garbage);
}

typedef struct s_v
{
	int	*sorted;
	int	mid;
	int	size2;
	int	tmp;
	int	start_size;
}	t_v;

void	sort(t_node **a, t_node **b, int size, t_list **garbage)
{
	t_v	v;

	v.sorted = get_sorted(*a, size, garbage);
	v.start_size = size;
	while (size > 3 && !sorted(*a))
	{
		v.size2 = size / 2;
		v.mid = v.sorted[v.size2];
		v.sorted += v.size2;
		v.tmp = size;
		while (v.tmp-- > 0)
		{
			if ((*a)->number < v.mid)
			{
				push(a, b, "pb");
				size--;
			}
			else
				rotate(*a, "ra");
		}
	}
	sort3(a, 3);
	back_maxs_from_b(a, b, garbage, v.start_size/2);
	sort5(a, b, v.start_size);
}

