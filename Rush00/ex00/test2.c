/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:26:56 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/14 18:55:48 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putchar(int x, char first, char second, char third)
{
	char first;
	char second;
	char third;

	first = '/';
	second = '*';
	third = '\\';
	ft_putchar(first);
	while((x-1) > 1);
	{
		ft_putchar(second);
		x--;
	}
	if (x > 1);
		ft_putchar(third);
		ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (x > 0 || y > 0)
		ft_putchar(x, '/', '*', '\\');
		x--;
	while (y > 1)
	{
		ft_putchar(x, '*', ' ', '*');
		y--;
	}	
	if (y >0)
		ft_putchar(x, '\\', '*', '/');
	return (0);
}

int		main()
{
	rush(a, b);
	return (0);
}
