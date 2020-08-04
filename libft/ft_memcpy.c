/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:40:14 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 00:49:20 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst1;
	unsigned char *src1;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n > 0)
	{
		*dst1 = *src1;
		dst1++;
		src1++;
		n--;
	}
	return (dst);
}
