/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:40:52 by sabenet           #+#    #+#             */
/*   Updated: 2021/02/07 17:43:36 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("Error please input value x and y\n");
	if (ac == 2)
		ft_putstr("Error please input value y\n");
	if (ac > 3)
		ft_putstr("Error too arguments\n");
	if (ac != 3)
	{
		ft_putstr("exemple : ./rush00 15 15\n");
		return (0);
	}
	if (ft_atoi(av[1]) <= 0 || ft_atoi(av[2]) <= 0)
	{
		ft_putstr("Please input positive value\n");
		return (0);
	}
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
