/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 10:54:57 by bledda            #+#    #+#             */
/*   Updated: 2021/01/19 09:53:24 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		print_int(int a)
{
	int b;

	if (a <= 9)
	{
		a = a + '0';
		ft_putchar(a);
	}
	else if (a <= 99)
	{
		b = a / 10;
		a = a % 10;
		b = '0' + b;
		a = '0' + a;
		ft_putchar(b);
		ft_putchar(a);
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int num[2];

	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			if (num[0] <= 9)
				write(1, "0", 1);
			print_int(num[0]);
			write(1, " ", 1);
			if (num[1] <= 9)
				write(1, "0", 1);
			print_int(num[1]);
			if (num[0] != 98)
				write(1, ", ", 2);
			if (num[1] == 99)
				num[0]++;
			num[1]++;
		}
	}
}
