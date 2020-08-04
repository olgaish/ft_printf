/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:43:21 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:04:20 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;

	str = (unsigned char *)b;
	while (len > 0)
	{
		*str = (unsigned char)c;
		len--;
		str++;
	}
	return (b);
}
