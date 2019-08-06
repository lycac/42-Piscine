/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:11:32 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/14 16:41:26 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int x, int y)
{
	int i;
	char cc;
	
	cc ='/';
	i = x;
	while(i > 0)
	{
		write (1, &c, 1);
		i--;
	}
	if (y > 1)
	{
		write (1, &cc, 1);
	}
}

int		rush01(int x, int y)
{
	int n;

	n =x;
	if(x <= 0 || y <= 0)
	{
		return (0);
	}
		ft_putchar('/', y, 1);
		ft_putchar('*', x - 2, y);
		ft_putchar('\\', x-x, y);
	while (--n - 1 > 0)
	{
		ft_putchar('\n', 1, y);
		ft_putchar('*', 1, y);
		ft_putchar(' ', x - 2, y);
		ft_putchar('*', 1, y);
	}
		ft_putchar('\n', 1, y);
		ft_putchar('\\', x - x, y);
		ft_putchar('*', x - 2, y);
		ft_putchar('/', x - x, y);
		return (0);
}	

int		main()
{
	rush01(4, 4);
	return(0);
}
