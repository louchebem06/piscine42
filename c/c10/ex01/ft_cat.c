/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c.                                          :+:      :+:    :+:   */
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

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, ": ", ft_strlen(": "));
}

void	ft_print_file(char *av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;

	i = 0;
	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		write(1, "cat: ", ft_strlen("cat: "));
		ft_putstr(av);
		write(1, "No such file or directory\n", 27);
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
	int i;

	i = 1;
	if (ac > 1)
		while (i < ac)
		{
			ft_print_file(av[i]);
			i++;
		}
	return (0);
}
