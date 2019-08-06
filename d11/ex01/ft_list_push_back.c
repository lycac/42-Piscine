/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:44:56 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/24 20:23:42 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include “ft_list.h”

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*last;

	tmp = ft_create_elem(data);
	last = *begin_list;
	if (*begin_list == NULL)
	{
		*begin_list = tmp;
		return (begin_list);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	return (begin_list);
}
