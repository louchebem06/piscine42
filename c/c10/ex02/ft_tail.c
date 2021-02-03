/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c.                                         :+:      :+:    :+:   */
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
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) != '\0' && i < n)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_file(char *av, int octes, int title)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;
	int 	j;

	j = 0;
	i = 0;
	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		ft_putstr("tail: ");
		ft_putstr(av);
		ft_putstr(": No such file or directory\n");
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
		while (buf[i] != 0)
			i++;
		if (!(octes >= i))
			while (j != octes)
			{
				i--;
				j++;
			}
		else
		{
			i = 0;
		}
		while (buf[i] != 0)
		{
			write(1, &buf[i], 1);
			i++;
		}
	}
}

int ft_atoi(char *str)
{
	int i;
	int atoi;

	i = 0;
	atoi = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - 48;
		i++;
	}
	return (atoi);
}

int		main(int ac, char **av)
{
	int i;
	int error;

	i = 0;
	error = 0;
	if (ac >= 2 && ft_strncmp(av[1], "-c", 2) == 0)
	{
		if (ac == 2)
		{
			ft_putstr("tail: option requires an argument -- c\n");
			ft_putstr("usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
		}
		else
		{
			while(av[2][i] != 0)
			{
				if (!(av[2][i] >= '0' && av[2][i] <= '9'))
					error = 1;
				i++;
			}
			if (!(av[2][0] >= '0' && av[2][0] <= '9') || error == 1)
			{
				ft_putstr("tail: illegal offset -- ");
				ft_putstr(av[2]);
				ft_putstr("\n");
			}
			else
			{
				i = 3;
				while (i < ac)
				{
					if (ac > 4)
						ft_print_file(av[i], ft_atoi(av[2]), 1);
					else
						ft_print_file(av[i], ft_atoi(av[2]), 0);
					i++;
				}
			}
		}
	}
	return (0);
}
