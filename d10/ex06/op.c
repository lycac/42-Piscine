/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:43:44 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/23 21:27:42 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_div(int a, int b)
{
	if (b != '0')
		ft_putnbr(a / b);
}

void	ft_mod(int a, int b)
{
	if (b != '0')
		ft_putnbr(a % b);
}
