/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:12:30 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:43:01 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t n;
	size_t i;
	size_t len;

	n = ft_strlen(dst);
	len = n;
	i = 0;
	if (dstsize <= n)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - n - 1)
		dst[len++] = src[i++];
	dst[len] = '\0';
	return (n + ft_strlen(src));
}
