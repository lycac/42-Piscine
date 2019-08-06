/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:32:18 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/23 17:37:26 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f) (char*))
{
	int word;
	int pos;

	word = 0;
	pos = 0;
	while (*tab[word] != '\0' || *tab[word] != '0')
	{
		while (tab[word][pos] != '\0' || tab[word][pos] != '0')
		{
			if (f(tab[word][pos]) == 1)
				return (1);
			pos++;
		}
		word++;
	}
	return (0);
}
