/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:00:49 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/07 17:10:00 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{
	t_node	*a;
	t_node	*b;
	t_node	*temp;
	int	size;

	if (argc == 1)
		exit(1);
	// if(argc == 2)
	// 	exit(1);
	char	*str;

	str = args_to_string(argv);
	// if(strlen(str) == 1)
	// 	exit(1);
	fill_stack(&a, str);
	temp = a;
	// while (temp) {
	// 	printf("%d\n", temp->data);
	// 	temp = temp->next;
	// }
	//rotate(a,"ra");
	
	size = get_size(a);
	if(size == 3)
		sort_three(&a);
	if(size == 5)
		sort_five(&a, &b);
	temp = a;
	// while (temp) {
	// 	printf("%d\n", temp->data);
	// 	temp = temp->next;
	// }
	return (0);
}