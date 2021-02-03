/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:18:23 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 09:18:25 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_select_file(int *fd, char **av)
{
	if (av[1][0] == 'M' && av[1][1] == 'W')
		*fd = open("numbers_mw.dict", O_RDONLY);
	else
		*fd = open("numbers.dict", O_RDONLY);
}

void	ft_result(char *value, char *buf)
{
	int size_value;

	size_value = ft_strlen(value);
	if (size_value <= 39)
	{
		ft_palier_37_39(size_value, value, buf);
		ft_palier_25_36(size_value, value, buf);
		ft_palier_13_24(size_value, value, buf);
		ft_palier_1_12(size_value, value, buf);
	}
	if (size_value >= 40)
	{
		write(1, "Repasse dans 7,5 millions d'années", 35);
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		error;
	char	lang[3];
	char	*value;
	int		fd;
	char	buf[BUF_SIZE + 1];

	error = 0;
	value = ft_arg_main(ac, av, &error, lang);
	if (error != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_select_file(&fd, av);
	if (fd == -1)
	{
		close(fd);
		write(1, "Dict Error\n", 11);
		return (0);
	}
	buf[read(fd, buf, BUF_SIZE)] = '\0';
	close(fd);
	ft_result(value, buf);
	return (0);
}
