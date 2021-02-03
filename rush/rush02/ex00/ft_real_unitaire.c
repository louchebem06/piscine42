/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_real_unitaire.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:12:58 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 09:13:00 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_real_unitaire(char *value, char *buf, int section)
{
	int i;
	int c;
	int check;

	i = -1;
	while (buf[++i] != '\0')
	{
		check = 0;
		c = 0;
		while (buf[i] != ':' && buf[i] != '\0')
		{
			check = (buf[i] == value[section] ? 1 : 0);
			c++;
			i++;
		}
		i = i + 2;
		while (buf[i] != '\n' && buf[i] != '\0')
		{
			if (check == 1 && c == 1)
				write(1, &buf[i], 1);
			i++;
		}
	}
	write(1, " ", 1);
}
