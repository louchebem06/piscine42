/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:43:35 by sabenet           #+#    #+#             */
/*   Updated: 2021/02/07 17:29:20 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	line_y(int x, int y, char *left, char *right)
{
	int y_line;
	int x_line;

	y_line = 0;
	x_line = x;
	while (y_line != y - 2)
	{
		if (x >= 1)
			ft_putstr(left);
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putstr(" ");
				x--;
			}
			x = x_line;
			ft_putstr(right);
		}
		y_line++;
		ft_putstr("\n");
	}
}

void	line_x(int x, char *left, char *inter, char *right)
{
	if (x >= 1)
	{
		ft_putstr(left);
		while (x >= 3)
		{
			ft_putstr(inter);
			x--;
		}
		if (x == 2)
			ft_putstr(right);
	}
	ft_putstr("\n");
}
