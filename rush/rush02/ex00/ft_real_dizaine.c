/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_real_dizaine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:10:43 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 09:10:45 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_real_dizaine1(char *value, char *buf, int section, int i)
{
	int c;
	int check;

	c = 0;
	check = 0;
	while (buf[i] != '\0')
	{
		while (buf[i] != ':' && buf[i] != '\0')
		{
			c++;
			i++;
		}
		if (buf[i - 2] == value[section])
			check = 1;
		i = i + 2;
		while (buf[i] != '\n' && buf[i] != '\0')
		{
			if (check == 1 && c == 2)
				write(1, &buf[i], 1);
			i++;
		}
		check = 0;
		c = 0;
		i++;
	}
}

void	ft_real_dizaine2(char *value, char *buf, int section, int i)
{
	int c;
	int check;

	c = 0;
	check = 0;
	while (buf[i] != '\0')
	{
		while (buf[i] != ':' && buf[i] != '\0')
		{
			c++;
			i++;
		}
		if (buf[i - 1] == value[section + 1] && buf[i - 2] == value[section])
			check = 1;
		i = i + 2;
		while (buf[i] != '\n' && buf[i] != '\0')
		{
			if (check == 1 && c == 2)
				write(1, &buf[i], 1);
			i++;
		}
		check = 0;
		c = 0;
		i++;
	}
}

void	ft_real_dizaine(char *value, char *buf, int section)
{
	int i;

	i = 0;
	if (value[section] != '1')
	{
		ft_real_dizaine1(value, buf, section, i);
	}
	else if (value[section] == '1')
	{
		ft_real_dizaine2(value, buf, section, i);
	}
	write(1, " ", 1);
}
