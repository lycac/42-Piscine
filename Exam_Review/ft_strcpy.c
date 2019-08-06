/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 21:05:59 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/31 13:38:15 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++));
	return (s1);
}

int		main(void)
{
    char boy[] = "harryyyyyyy";
    char girl[] = "sally";

    printf("boy is: %s\n", boy);
    printf("girl is: %s\n", girl);
    ft_strcpy(boy, girl);
    printf("boy is: %s\n", boy);
    return (0);
}
