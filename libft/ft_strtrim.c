/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:06:20 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 00:03:59 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int		ft_isblank(char a)
{
	if (a == ' ' || a == '\n' || a == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	i;
	size_t	end;
	char	*res;

	if (!s)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(s);
	end = end - 1;
	while (s[i] != '\0' && ft_isblank(s[i++]) != '\0')
		start++;
	if (s[i] == '\0')
	{
		if (!(res = ft_strnew(end)))
			return (NULL);
		return (ft_strncpy(res, (char *)s + start, 0));
	}
	while (ft_isblank(s[end]) && end >= start)
		end--;
	end = end - start + 1;
	if (!(res = ft_strnew(end)))
		return (NULL);
	return (ft_strncpy(res, (char *)s + start, end));
}
