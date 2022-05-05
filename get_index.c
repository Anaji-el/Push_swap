/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:10:22 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/05 18:36:40 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_node *stack, int nm)
{
	int	index;

	index = 0;
	while (stack)
	{

		if (stack->data != nm)
			index++;
		else if (stack->data == nm)
		{
			index++;
			return (index);
		}
		stack = stack->next;
	}
	return (index);
}