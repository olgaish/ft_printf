/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 17:03:40 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:51:06 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n-- > 0)
	{
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
