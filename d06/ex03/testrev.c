/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:57:35 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/17 22:02:30 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc - 1)
	{
		i = argc - 1;
		while (i >= 1)
		{
			j = 0;
			while(argv [i][j] != '\0')
			{
				ft_putchar(argv [i][j]);
				j--;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
