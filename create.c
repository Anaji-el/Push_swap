/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:09:21 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/22 11:23:35 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	create(int n)
{
	t_node	*node;
	
	node = (t_node *)malloc(sizeof(t_node));
	node->data = n;
	node->next = NULL;
	return (node);
}