/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:13:41 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 20:49:03 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_number(void)
{
	int result;

	result = ft_next() - '0';
	while (ft_actual() >= '0' && ft_actual() <= '9')
	{
		result = 10 * result + ft_next() - '0';
	}
	return (result);
}
