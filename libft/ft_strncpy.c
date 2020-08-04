/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:40:57 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/09 14:36:56 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t n;

	n = ft_strlen(src);
	if (n < len)
	{
		ft_memmove(dst, src, n);
		ft_bzero(dst + n, len - n);
	}
	else
	{
		ft_memmove(dst, src, ft_strnlen(src, len));
	}
	return (dst);
}
