/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 05:23:55 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/13 16:59:57 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_atoi(const char *str)
{
	long	i;
	long	s;
	int	j;

	i = 0;
	s = 0;
	j = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else
		{
			put_error("Error\n");
			exit(1);
		}
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			j *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		s = (s * 10 + str[i] - 48);
		i++; 
	}
	if (s * j < INT_MIN || s * j > INT_MAX)
	{
		put_error("Error\n");
		exit(1);
	}

	return (s * j);
}