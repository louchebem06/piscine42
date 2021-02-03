#include "ft.h"

void	ft_print_file(char *av, int octes, int title)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;
	int		j;

	j = -1;
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
}

void	msg_error(int i, char **av)
{
	if (i == 1)
	{
		ft_putstr("tail: option requires an argument -- c\n");
		ft_putstr("usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
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
	if (ac >= 2 && ft_strncmp(av[1], "-c", 2) == 0)
	{
		if (ac == 2)
			msg_error(1, av);
		else
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
	}
	return (0);
}
