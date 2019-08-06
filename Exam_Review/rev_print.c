/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:14:45 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/31 20:24:33 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i += 1;
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}