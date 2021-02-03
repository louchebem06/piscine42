/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:16:21 by bledda            #+#    #+#             */
/*   Updated: 2021/01/18 10:53:35 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	nb2 = nb;
	if (nb2 >= 10)
		ft_putnbr(nb2 / 10);
	nb2 = nb2 % 10 + '0';
	write(1, &nb2, 1);
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		ft_putnbr(01);
	}
}

int main()
{
	ft_print_combn(1);
	return (0);
}
