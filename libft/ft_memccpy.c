/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:17:54 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 00:47:40 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	check;
	unsigned char	*dstn;
	unsigned char	*srcn;
	size_t			i;

	check = (unsigned char)c;
	dstn = (unsigned char *)dst;
	srcn = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstn[i] = srcn[i];
		if (dstn[i] == check)
		{
			return (&dstn[i + 1]);
		}
		else
		{
			dstn[i] = srcn[i];
			i++;
		}
	}
	return (0);
}
