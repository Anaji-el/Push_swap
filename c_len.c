/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:47:20 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/08 22:47:44 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_len(t_node *stack)
{
	int		i;
	t_node	*tmp;

	tmp = stack;
	i = 0;
	if (stack != NULL)
	{
		tmp = tmp->next;
		tmp = tmp->next;
		i++;
		while (tmp != stack->next)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}