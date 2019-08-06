/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:46:00 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/11 21:57:32 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_number(char first, char second, char third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (!(first == '7' && second == '8' && third == '9')) 
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combo(void);
{
	char first;
	char second;
	char third;

	first = '0';
	second = '0';
	third = '0';
	while(first <= '9')
	{
		second = first + 1;
		while(second <= '9')
		{
			third = second + 1;
			while(third <= '9')
			{
				ft_print_number(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
