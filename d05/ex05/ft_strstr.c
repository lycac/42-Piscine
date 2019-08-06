/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:51:29 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/16 22:22:21 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare(char *i, char *j)
{
	while (*i && *j)
	{
		if (*i != *j)
			return (0);
		i++;
		j++;
	}
	return (*i == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr;

	if (*to_find == '\0')
		return (str);
	while (*str != *to_find && *str != '\0' && *to_find != '\0')
		str++;
	while (*str == *to_find)
	{
		if (exact(str, to_find))
			return (str);
		else
		{
			str++;
			ptr = ft_strstr(str, to_find);
			return (ptr);
		}
	}
	return (NULL);
}
