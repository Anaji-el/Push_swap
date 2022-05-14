/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:07:35 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/14 22:19:11 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	partition(int *array, int start, int end)
{
	int	b;
	int	pivot;
	int	tmp;
	int	i;

	pivot = array[end];
	b = start - 1;
	i = start - 1;
	while (++i <= end)
	{
		if (array[i] <= pivot)
		{
			tmp = array[i];
			array[i] = array[++b];
			array[b] = tmp;
		}
	}
	return (b);
}

void	quick_sort(int *array, int start, int end)
{
	int	pivot;

	if (start >= end)
		return ;
	pivot = partition(array, start, end);
	quick_sort(array, start, pivot - 1);
	quick_sort(array, pivot + 1, end);
}
