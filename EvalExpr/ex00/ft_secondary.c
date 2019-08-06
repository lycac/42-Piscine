/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secondary.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:20:20 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 14:23:46 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int	ft_secondary(void)
{
	int res;

	res = ft_primary();
	while (ft_actual() == '+' || ft_actual() == '-')
		if (ft_next() == '+')
			res += ft_primary();
		else
			res -= ft_primary();
	return (res);
}
