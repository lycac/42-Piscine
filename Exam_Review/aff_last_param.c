/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:30:05 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/30 20:41:08 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = -1;
	if (argc > 1)
	{
		while(argv[argc - 1][i++])
		{
			write (1, &argv[argc - 1][i], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
