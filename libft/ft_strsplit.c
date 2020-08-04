/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:25:54 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/09 23:29:52 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	words;
	int		i;

	words = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] != 0 && s[i] == c)
			i++;
		if (s[i] != 0)
			words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	words;
	size_t	start;
	size_t	j;
	size_t	k;
	char	**res;

	if (s == NULL)
		return (NULL);
	j = 0;
	k = 0;
	words = count_words(s, c);
	if (!(res = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (j < words)
	{
		while (s[k] == c)
			k++;
		start = k;
		while (s[k] != '\0' && s[k] != c)
			k++;
		if (!(res[j] = ft_strsub(s, start, (k - start))))
			return (NULL);
		j++;
	}
	return (res);
}
