/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:16:21 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:49:00 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len2;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	len2 = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i + len2 <= len)
	{
		if (haystack[i] == *needle &&
				ft_strnequ(haystack + i, needle, len2) == 1)
			return ((char *)(haystack + i));
		else
			i++;
	}
	return (NULL);
}
