/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:37:42 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/30 20:29:52 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc < 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		while (argv[1][i])
		{
			write (1, &argv[1][i++], 1);
		}
		write (1, "\n", 1);
	}
	return (0);
}