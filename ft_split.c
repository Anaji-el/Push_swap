/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:02:03 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/13 23:33:28 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_free(char **newstr)
{
	int	i;

	i = 0;
	while (newstr[i] != 0)
	{
		free(newstr[i]);
		i++;
	}
	free(newstr);
	return (0);
}

static char	*ft_words(char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	if (!word)
		return (*ft_free(&word));
	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		i;

	i = 0;
	if ((s == 0 && c == 0) || s == 0)
		return (0);
	newstr = (char **)malloc(sizeof(char *) * (ft_count((char *)s, c) + 1));
	if (newstr == 0)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			newstr[i] = ft_words((char *)s, c);
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	newstr[i] = 0;
	return (newstr);
}
