/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:12:26 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 00:34:07 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*cur1;

	if (!lst || !f)
		return (NULL);
	if (!(cur1 = f(lst)))
		return (NULL);
	res = cur1;
	while (lst->next)
	{
		lst = lst->next;
		if (!(cur1->next = f(lst)))
			return (NULL);
		cur1 = cur1->next;
	}
	return (res);
}
