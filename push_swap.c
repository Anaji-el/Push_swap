/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:00:49 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:21:04 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;
	char	*str;

	if (argc == 1)
		exit(1);
	str = args_to_string(argv);
	fill_stack(&a, str);
	if (sorted(a) == 1)
		exit (0);
	size = get_size(a);
	if (size <= 3)
		sort_three(&a);
	if (size > 3 && size <= 5)
		sort_five(&a, &b);
	if (size > 5)
		sort_using_radix(&a, &b);
	return (0);
}
