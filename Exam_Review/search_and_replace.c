/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:22:43 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/31 11:16:45 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv [2][0])
					write (1, &argv[3][0], 1);
				else
					write (1, &argv[1][i], 1);
				i += 1;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
