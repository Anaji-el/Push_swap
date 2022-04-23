/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:00:49 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/22 15:57:31 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{
	if (argc == 1)
		return (0);
	char	*str;
	char	**split_str;
	int		*array;
	int		len;
	int		i;

	str = args_to_string(argv);
	split_str = ft_split(str, ' ');
	len = 0;
	while (split_str[len])
		len++;
	array = malloc(sizeof(int) * i);
	i = 0;
	while (split_str[i])
	{
		array[i] = ft_atoi(split_str[i]);
		if (is_duplicate(array, array[i], len) == -1)
			exit(1);
		i++;
	}
	i = 0;
	while (split_str[i])
	{
		printf("%d ", array[i]);
		i++;
	}
	
	return (0);
}