/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 13:09:51 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 20:49:35 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_elim(void)
{
	int		i;
	int		x;
	char	*s;

	i = 0;
	x = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen(0) + 1));
	while (g_str[i])
	{
		if (g_str[i] != ' ')
		{
			s[x] = g_str[i];
			x++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	ft_actual(void)
{
	return (*g_str);
}

char	ft_next(void)
{
	return (*g_str++);
}
