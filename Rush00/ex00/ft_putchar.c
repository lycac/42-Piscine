/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:00:30 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/14 14:03:27 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int x)
{
	int i;
	int l;

	i = x;
	while (i > 0)
	{
		write (1, &c, 1);
		i--;
	}
}
