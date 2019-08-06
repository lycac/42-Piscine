/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_again.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:19:34 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/29 18:18:20 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}




void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = '0' - 1;
	while(++first <= '7')
	{
		second = first;
		while(++second <= '8')
		{
			third = second;
			while(++third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7')
				{
					ft_putchar(',');
				}
			}
		}	
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
