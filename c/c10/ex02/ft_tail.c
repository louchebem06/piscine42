/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:49:17 by bledda            #+#    #+#             */
/*   Updated: 2021/02/01 12:49:19 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	no_file_found(char *av)
{
	ft_putstr("tail: ");
	ft_putstr(av);
	ft_putstr(": No such file or directory\n");
}

void	print_file(char *buf, int octes)
{
	int		i;
	int		j;

	j = -1;
	i = 0;
	while (buf[i] != 0)
		i++;
	if (!(octes >= i))
		while (++j != octes)
			i--;
	else
		i = 0;
	while (buf[i] != 0)
	{
		write(1, &buf[i], 1);
		i++;
	}
}

void	ft_print_file(char *av, int octes, int title)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;

	i = 0;
	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		no_file_found(av);
	}
	else
	{
		if (title == 1)
		{
			ft_putstr("==> ");
			ft_putstr(&av[i]);
			ft_putstr(" <==\n");
		}
		buf[read(fd, buf, BUF_SIZE)] = '\0';
		close(fd);
		print_file(buf, octes);
	}
}

void	msg_error(int i, char **av)
{
	if (i == 1)
	{
		ft_putstr("tail: option requires an argument -- c\n");
		ft_putstr("usage: tail [-F | -f | -r] [-q] [-b # | ");
		ft_putstr("-c # | -n #] [file ...]\n");
	}
	if (i == 2)
	{
		ft_putstr("tail: illegal offset -- ");
		ft_putstr(av[2]);
		ft_putstr("\n");
	}
}

int		main(int ac, char **av)
{
	int i;
	int error;

	i = -1;
	error = 0;
	if (ac == 2 && ft_strncmp(av[1], "-c", 2) == 0)
		msg_error(1, av);
	else if (ac > 2 && ft_strncmp(av[1], "-c", 2) == 0)
	{
		while (av[2][++i] != 0)
			if (!(av[2][i] >= '0' && av[2][i] <= '9'))
				error = 1;
		if (!(av[2][0] >= '0' && av[2][0] <= '9') || error == 1)
			msg_error(2, av);
		else
		{
			i = 2;
			while (++i < ac)
				if (ac > 4)
					ft_print_file(av[i], ft_atoi(av[2]), 1);
				else
					ft_print_file(av[i], ft_atoi(av[2]), 0);
		}
	}
	return (0);
}
