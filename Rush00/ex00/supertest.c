/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supertest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:41:43 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/14 18:09:01 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(int num1, int num2)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	return (0);
}

int		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar(x, '/');
	}
		while (y > 1)
		{
			ft_putchar('!', '@');
			y--;	
		}
				if (y > 0)
				{
					ft_putchar('/', '*');
				}
		return (0);
}

int		main(void)
{
	rush(2, 3);
	return (0);
}
