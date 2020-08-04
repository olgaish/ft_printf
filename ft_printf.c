/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 09:17:29 by oishutin          #+#    #+#             */
/*   Updated: 2020/06/29 19:22:32 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *strappend(char *s1, char *s2, int len2)
{
	char	*res;
	size_t	len1;

	if (!s2)
		return (NULL);
	if (!s1)
		len1 = 0;
	else
		len1 = ft_strlen(s1);

	if (!(res = ft_strnew(len1 + len2)))
		return (NULL);
	if (s1)
		ft_strncpy(res, s1, len1);
	ft_strncpy(res + len1, s2, len2);
	free (s1);
	return (res);	
}

char *parse_convers(char *format)
{
	format = format;
	return (NULL);
}

char *parse_flags(char *format,  va_list *ap, int *i)
{
	parse_convers(format);
	*i = *i + 1;
	ap = ap;
	return (NULL);
}

char *parse_format(char *format, va_list *ap)
{
	int i;
	char *res;
	
	res = NULL;
	i = 0;
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			i++;
		}
		res = strappend(res, format, i);
		if (format[i] != '\0')
		{
			format = format + i;
			i = 0;
		}
		parse_flags(format, ap, &i);
	}
	write(1, res, i);
	return (NULL);
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	
	va_start(ap, format);
	parse_format((char *)format, &ap);
	va_end(ap);
	return (1);
}
