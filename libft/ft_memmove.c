/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:12:49 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:07:54 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstn;
	unsigned char	*srcn;
	size_t			i;

	dstn = (unsigned char *)dst;
	srcn = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (dstn <= srcn)
	{
		while (len-- > 0)
		{
			*(dstn++) = *(srcn++);
		}
	}
	else
	{
		while (++i <= len)
		{
			dstn[len - i] = srcn[len - i];
		}
	}
	return (dst);
}
