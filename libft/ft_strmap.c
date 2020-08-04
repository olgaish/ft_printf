/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:00:44 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/09 15:25:54 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(res = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
