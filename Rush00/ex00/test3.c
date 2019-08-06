/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:56:10 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/14 19:16:32 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int x)
{
	int i;
	
	i = x;
	while(i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void	start(int x, int y)
{
	ft_putchar('/', 1);
	ft_putchar('*', x -2);
	if (x==1)
		return;
	ft_putchar('\\', 1);
}

void	ending(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('\n', 1);
		ft_putchar('\\', 1);
		if (x > 1)
		{
			ft_putchar('*', x - 2);
			ft_putchar('/', 1);
		}
	}
}

int		rush(int x, int y)
{
	int n;

	n = y;
	if(x <= 0 || y <= 0)
	{
		return (0);
	}
	start(x, y);
	while (--n - 1 > 0)
	{
		ft_putchar('\n', 1);
		ft_putchar('*', 1);
		ft_putchar(' ', x - 2);
		if (x > 1)
			ft_putchar('*', 1);
	}
	ending(x, y);
	return (0);
}

int		main()
{
	rush(1, 5);
	ft_putchar('\n', 2);
	return(0);
}
