/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:23:27 by bledda            #+#    #+#             */
/*   Updated: 2021/02/03 11:48:54 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_print_file(int ac, char **av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;

	i = 0;
	fd = open(av[ac - 1], O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		write(1, "Cannot read file.\n", ft_strlen("Cannot read file.\n"));
	}
	else
	{
		buf[read(fd, buf, BUF_SIZE)] = '\0';
		close(fd);
		while (buf[i] != 0)
		{
			write(1, &buf[i], 1);
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write(1, "File name missing.\n", ft_strlen("File name missing.\n"));
	else if (ac == 2)
	{
		ft_print_file(ac, av);
	}
	else
		write(1, "Too many arguments.\n", ft_strlen("Too many arguments.\n"));
	return (0);
}
