/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:41:32 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 08:41:34 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_check_lang(int *error, char lang[3], char **av)
{
	if (av[1][0] == 'E' && av[1][1] == 'N')
	{
		lang[0] = 'E';
		lang[1] = 'N';
		lang[3] = 0;
	}
	else if (av[1][0] == 'M' && av[1][1] == 'W')
	{
		lang[0] = 'M';
		lang[1] = 'W';
		lang[3] = 0;
	}
	else
		*error = 1;
}

char	*ft_add_value(int j, int i, char **av, int *error)
{
	int		size;
	int		temp_i;
	int		v;
	char	*value;

	value = 0;
	v = 0;
	size = 0;
	while (av[j][i] == '0' && av[j][i + 1] != 0)
		i++;
	temp_i = i;
	if (!(av[j][i] >= '0' && av[j][i] <= '9'))
		*error = 1;
	while (av[j][i++] >= '0' && av[j][i++] <= '9')
		size++;
	i = temp_i;
	if (!(value = malloc(sizeof(char) * (size + 1))))
		*error = 1;
	while (av[j][i] >= '0' && av[j][i] <= '9')
	{
		value[v++] = av[j][i];
		i++;
	}
	value[v] = 0;
	return (value);
}

char	*ft_check_atoi(int ac, char **av, int *error)
{
	int		j;
	int		i;
	char	*value;

	value = 0;
	i = 0;
	j = (ac == 2 ? 1 : 2);
	while ((av[j][i] == ' ') || (av[j][i] == '\t'))
		i++;
	while (av[j][i] == '+' || av[j][i] == '-')
	{
		if ((av[j][i] == '-') ||
			(av[j][i] == '-' && av[j][i + 1] == '-') ||
			(av[j][i] == '-' && av[j][i + 1] == '+') ||
			(av[j][i] == '+' && av[j][i + 1] == '+') ||
			(av[j][i] == '+' && av[j][i + 1] == '-'))
			*error = 1;
		i++;
	}
	if (av[j][i] >= '0' && av[j][i] <= '9')
		value = ft_add_value(j, i, av, error);
	else
		*error = 1;
	return (value);
}

char	*ft_arg_main(int ac, char **av, int *error, char lang[3])
{
	char *value;

	value = 0;
	if (ac < 2 || ac > 3)
		*error = 1;
	if (ac == 2)
	{
		lang[0] = 'E';
		lang[1] = 'N';
		lang[3] = 0;
		value = ft_check_atoi(ac, av, error);
	}
	else if (ac == 3)
	{
		ft_check_lang(error, lang, av);
		value = ft_check_atoi(ac, av, error);
	}
	return (value);
}
