/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_primary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 13:58:13 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 18:28:30 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int	ft_primary(void)
{
	int		res;
	char	operand;

	res = ft_verify();
	while (ft_actual() == '*' || ft_actual() == '/' || ft_actual() == '%')
	{
		operand = ft_next();
		if (operand == '*')
			res *= ft_verify();
		else if (operand == '/')
			res /= ft_verify();
		else
			res %= ft_verify();
	}
	return (res);
}
