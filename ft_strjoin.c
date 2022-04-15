/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 05:33:26 by anaji-el          #+#    #+#             */
/*   Updated: 2022/04/15 04:48:13 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;
	int		f;
	
	i = 0;
	j = 0;
	f = 0;
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_str)
		return (NULL);
	while (s1[i])
		new_str[f++] = s1[i++];
	while (s2[j])
		new_str[f++] = s2[j++];
	new_str[f] = '\0';
	return (new_str);
}
