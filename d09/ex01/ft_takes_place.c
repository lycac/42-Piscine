/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:15:59 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/19 10:00:49 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 0 && hour < 11)
		printf("%i.00 A.M. AND %i.00 A.M.\n", hour, hour + 1);
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	if (hour > 12 && hour < 23)
		printf("%i.00 P.M. AND %i.00 P.M.\n", hour - 12, hour - 11);
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	if (hour == 0 || hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
}

int		main(void)
{
	int i;

	i = -1;
	while (i++ < 24)
		ft_takes_place(i);
	return (0);
}
