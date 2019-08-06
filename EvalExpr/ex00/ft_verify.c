/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:29:32 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 18:34:38 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int	ft_verify(void)
{
	int res;

	if (ft_actual() >= '0' && ft_actual() <= '9')
		return (ft_number());
	else if (ft_actual() == '(')
	{
		ft_next();
		res = ft_secondary();
		ft_next();
		return (res);
	}
	else if (ft_actual() == '-')
	{
		ft_next();
		return (-ft_verify());
	}
	return (0);
}
