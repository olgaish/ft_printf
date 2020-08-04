/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:01:32 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/09 17:00:44 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n && *s1 && *s2)
	{
		if (*s1++ == *s2++)
			i++;
		else
			return (0);
	}
	if (i >= n)
		return (1);
	else if (!*s1 && !*s2)
		return (1);
	else
		return (0);
}
