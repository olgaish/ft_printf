/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 19:48:50 by oishutin          #+#    #+#             */
/*   Updated: 2020/03/10 00:42:32 by oishutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *cur;

	cur = *alst;
	while (cur)
	{
		temp = cur;
		del(temp->content, temp->content_size);
		free(temp);
		cur = temp->next;
	}
	*alst = NULL;
}
