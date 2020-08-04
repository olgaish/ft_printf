/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:07:02 by oishutin          #+#    #+#             */
/*   Updated: 2020/02/25 14:42:27 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sn1;
	unsigned char	*sn2;
	size_t			i;

	sn1 = (unsigned char *)s1;
	sn2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sn1[i] == sn2[i])
		{
			i++;
		}
		else
		{
			return ((int)(sn1[i] - sn2[i]));
		}
	}
	return (0);
}
