/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:26:42 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 00:48:51 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && i < n)
		s1[len++] = s2[i++];
	s1[len] = '\0';
	return (s1);
}
