/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:52:55 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/30 15:02:57 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strrev(char *str)
{
	char	*tmp;
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (str[a])
		a++;
	a--;
	while (a > i)
	{
		tmp = str[i];
		str[i] = str[a];
		str[a] = tmp;
		i++;
		a--;
	}
	return (str);
}

int		main(void)
{
	char s[8] = "12345678";

	ft_strrev(s);
	return (0);
}
