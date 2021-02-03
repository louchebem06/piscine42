/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:23:27 by bledda            #+#    #+#             */
/*   Updated: 2021/02/02 09:23:30 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#	define BUF_SIZE 4096

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (ac < 2)
	{
		write (1, "File name missing.\n", ft_strlen("File name missing.\n"));
		return (0);
	}
	else if (ac == 2)
	{
		fd = open("numbers_mw.dict", O_RDONLY);
		if (fd == -1)
		{
			close(fd);
			write(1, "Cannot read file.\n", ft_strlen("Cannot read file.\n"));
			return (0);
		}
		buf[read(fd, buf, BUF_SIZE)] = '\0';
		close(fd);
	}
	else if (ac > 2)
	(
		write (1, "Too many arguments.\n", ft_strlen("Too many arguments.\n"));
		return (0);
	)
	return (0);
}

/*
Si il n’y aucun argument, votre programme doit afficher
File name missing.
• Si il y a trop d’argument, votre programme doit afficher
Too many arguments.
• Si le fichier n’est pas lisible, votre programme doit afficher
Cannot read file.
*/