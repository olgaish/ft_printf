/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:55:05 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:09:40 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sn;
	unsigned char	cn;
	size_t			i;

	sn = (unsigned char *)s;
	cn = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (sn[i] == cn)
		{
			return (&sn[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
