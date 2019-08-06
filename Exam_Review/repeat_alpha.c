/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 21:21:01 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/31 09:50:26 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	letter;
	int	repeat;

	if (ac == 2)
	{
		letter = 0;
		while (av[1][letter])
		{
			repeat = 1;
			if (av[1][letter] >= 'a' && av[1][letter] <= 'z')
				repeat += av[1][letter] - 'a';
			else if (av[1][letter] >= 'A' && av[1][letter] <= 'Z')
				repeat += av[1][letter] - 'A';
			while (repeat)
			{
				write (1, &av[1][letter], 1);
				repeat--;
			}
			letter++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
