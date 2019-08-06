/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 10:19:09 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 21:01:39 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int	eval_expr(char *str)
{
	g_str = str;
	g_str = ft_elim();
	return (ft_secondary());
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
