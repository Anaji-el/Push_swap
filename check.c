/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check->c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:40:42 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/20 09:45:13 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int n)
{	
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	arg_valid(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] != '-' && str[i] != ' ' && !(ft_isdigit(str[i])))
			return (-1);
		if (str[i] == '-' && !(ft_isdigit(str[i + 1])))
			return (-1);
		i++;
	}
	return (0);
}

char	*args_to_string(const char **argv)
{
	int i;
	char	*str;
	char	*tmp;
	
	i = 1;
	
	str = (char *)malloc(sizeof(char));
	while (argv[i])
	{
		if (arg_valid(argv[i]) == -1)
			exit(1);
		tmp = ft_strjoin(str, argv[i]);
		free(str);
		str = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	return (str);
}

// int 	is_duplicate(t_node *a)
// {
// 	t_node *tmp;
// 	tmp = a;
// 	printf("the a is %d",(int)a);
// 	printf("the a is %d",(int)a->next);
// 	return(0);
// 	while (a)
// 	{
// 		if (a->data != a->next->data)
// 			a = a->next;
// 		if (a->data == a->next->data)
// 			return(0);
// 	}
// 	return(1);
// }

int	is_duplicate(t_node *first, t_node *second)
{
	while (second)
	{
		if (first->data != second->next->data && second != '\0')
			second = second->next;
		first = first->next;
		return 1;
	}
	return 0;
}

void	fill_stack(t_node **stack, char *str)
{
	int		size;
	t_node	*node;
	char	**tab;

	tab = ft_split(str, ' ');
	size = 0;
	while (tab[size])
		size++;
	while (--size >= 0)
	{
		node = create(ft_atoi(tab[size]));
		add(node, stack);
	}
}