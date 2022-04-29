/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:00:49 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/28 17:42:57 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{
	t_node	*a;
	t_node	*b;
	t_node	*temp;

	if (argc == 1)
		return (0);
	char	*str;

	str = args_to_string(argv);
	fill_stack(&a, str);
	if (is_duplicate())
		exit(1);
	temp = a;
	while (temp) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	return (0);
}