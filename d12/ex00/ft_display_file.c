/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:36:36 by aconstan          #+#    #+#             */
/*   Updated: 2019/07/25 19:23:20 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4

void	ft_print_file(char *name)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	while(read(fd, buf, BUF_SIZE))
	{
		write (1, buf, BUF_SIZE);
	}
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_print_file(argv[1]);
	else if (argc < 2)
		write (2, "File name missing.\n", 19);
	else
		write (2, "Too many arguments.\n", 20);
	return (0);
}
