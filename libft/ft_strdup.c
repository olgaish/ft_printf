/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:14:51 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 15:31:22 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *src)
{
	char	*res;

	if (!(res = ft_strnew(ft_strlen(src))))
		return (NULL);
	res = ft_strcpy(res, src);
	return (res);
}
