/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:36:17 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/13 22:13:24 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (!nb || power < 0)
	{
		return (0);
	}
	else if (!power)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
