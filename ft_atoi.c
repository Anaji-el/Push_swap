/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 05:23:55 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/14 05:23:58 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


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
	return (s * j);
}