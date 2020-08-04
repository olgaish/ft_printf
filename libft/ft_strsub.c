/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:55:26 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/09 15:19:53 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (s == NULL)
		return (NULL);
	if (!(res = ft_strnew(len)))
		return (NULL);
	return (ft_strncpy(res, s + start, len));
}
