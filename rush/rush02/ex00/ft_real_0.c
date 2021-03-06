/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_real_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:09:09 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 09:09:11 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_real_0(char *buf, int zero)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (buf[i] != '\0')
	{
		while (buf[i] != ':' && buf[i] != '\0')
		{
			c++;
			i++;
		}
		i = i + 2;
		while (buf[i] != '\n' && buf[i] != '\0')
		{
			if (c == zero)
				write(1, &buf[i], 1);
			i++;
		}
		c = 0;
		i++;
	}
	write(1, " ", 1);
}
