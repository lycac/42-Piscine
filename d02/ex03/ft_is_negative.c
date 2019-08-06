/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_again.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:20:39 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/29 15:42:40 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if(n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

int		main(void)
{
	int x = '0';

	ft_is_negative(x);
	return (0);
}
