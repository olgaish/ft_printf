/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:24:07 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/03 15:45:18 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *res;

	res = NULL;
	while (*s)
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	else
		return (res);
}
