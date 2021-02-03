/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:53:17 by bledda            #+#    #+#             */
/*   Updated: 2021/01/18 10:51:23 by bledda           ###   ########.fr       */
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
