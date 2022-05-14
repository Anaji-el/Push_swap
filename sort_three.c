/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:45:03 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:23:11 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **a)
{
	int	max;

	max = get_m(*a);
	if (max == (*a)->data)
		rotate(*a, "ra");
	else if (max == (*a)->next->data)
		r_rotate(*a, "rra");
	if ((*a)->data > (*a)->next->data)
		swap(*a, "sa");
}
