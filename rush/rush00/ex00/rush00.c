/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:43:35 by sabenet           #+#    #+#             */
/*   Updated: 2021/01/16 11:03:52 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	x_main(int x);
void	x_last(int x);
void	y__(int x, int y);

void	rush(int x, int y)
{
	char return_;

	return_ = '\n';
	if (x > 0 && y > 0)
	{
		if (y == 1)
			x_main(x);
		if (y == 2)
		{
			x_main(x);
			ft_putchar(return_);
			x_last(x);
		}
		if (y >= 3)
		{
			x_main(x);
			ft_putchar(return_);
			y__(x, y);
			x_last(x);
		}
	}
	ft_putchar('\n');
}

void	y__(int x, int y)
{
	char tab[2];

	tab[0] = 0;
	tab[1] = x;
	while (tab[0] != y - 2)
	{
		if (x == 1)
			ft_putchar('|');
		if (x == 2)
		{
			ft_putchar('|');
			ft_putchar('|');
		}
		if (x >= 3)
		{
			ft_putchar('|');
			x++;
			while (--x >= 3)
				ft_putchar(' ');
			x = tab[1];
			ft_putchar('|');
		}
		ft_putchar('\n');
		tab[0]++;
	}
}

void	x_main(int x)
{
	if (x == 1)
		ft_putchar('o');
	if (x == 2)
	{
		ft_putchar('o');
		ft_putchar('o');
	}
	if (x >= 3)
	{
		ft_putchar('o');
		while (x >= 3)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
}

void	x_last(int x)
{
	if (x == 1)
		ft_putchar('o');
	if (x == 2)
	{
		ft_putchar('o');
		ft_putchar('o');
	}
	if (x >= 3)
	{
		ft_putchar('o');
		while (x >= 3)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
}
