/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:20:53 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/05 14:26:17 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	ft_size(unsigned int n)
{
	int size;

	size = 0;
	if (n == 0)
		size = 1;
	while (n >= 1)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char			*res;
	unsigned int	nb;
	int				len;

	len = 0;
	if (n >= 0)
		nb = (unsigned int)n;
	else
	{
		nb = (unsigned int)(n * -1);
		len++;
	}
	len = len + ft_size(nb);
	if (!(res = ft_strnew(len)))
		return (NULL);
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		*res = '0';
	while (nb >= 1)
	{
		res[len-- - 1] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (res);
}
