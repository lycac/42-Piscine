/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:16:26 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/28 20:48:04 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVALEXPR_H
# define FT_EVALEXPR_H
# include <unistd.h>
# include <stdlib.h>

char	*g_str;
char	ft_actual();
char	ft_next();
char	*ft_elim();
int		ft_number();
int		ft_primary();
int		ft_secondary();
int		ft_verify();
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
