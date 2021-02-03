/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palier_1_12.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:42:39 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 15:42:42 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_palier_1_3(int size_value, char *value, char *buf)
{
	if (size_value >= 3)
	{
		if (value[size_value - 3] != '0')
			ft_real_unitaire(value, buf, size_value - 3);
		if (value[size_value - 3] != '0')
			ft_real_0(buf, 3);
	}
	if (size_value >= 2)
	{
		ft_real_dizaine(value, buf, size_value - 2);
		if (value[size_value - 2] != '1' && value[size_value - 1] != '0')
			ft_real_unitaire(value, buf, (size_value - 1));
	}
	else
		ft_real_unitaire(value, buf, (size_value - 1));
}

void	ft_palier_4_6(int size_value, char *value, char *buf)
{
	if (size_value >= 6)
	{
		if (value[size_value - 6] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 6);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 5)
	{
		if (value[size_value - 5] != '0')
			ft_real_dizaine(value, buf, size_value - 5);
	}
	if (size_value >= 4)
	{
		if (value[size_value - 4] != '0' && value[size_value - 5] != '1')
			ft_real_unitaire(value, buf, size_value - 4);
		if (value[size_value - 4] != '0')
			ft_real_0(buf, 4);
	}
}

void	ft_palier_7_9(int size_value, char *value, char *buf)
{
	if (size_value >= 9)
	{
		if (value[size_value - 9] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 9);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 8)
	{
		if (value[size_value - 8] != '0')
			ft_real_dizaine(value, buf, size_value - 8);
	}
	if (size_value >= 7)
	{
		if (value[size_value - 7] != '0' && value[size_value - 8] != '1')
			ft_real_unitaire(value, buf, size_value - 7);
		if (value[size_value - 7] != '0')
			ft_real_0(buf, 7);
	}
}

void	ft_palier_10_12(int size_value, char *value, char *buf)
{
	if (size_value >= 12)
	{
		if (value[size_value - 12] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 12);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 11)
	{
		if (value[size_value - 11] != '0')
			ft_real_dizaine(value, buf, size_value - 11);
	}
	if (size_value >= 10)
	{
		if (value[size_value - 10] != '0' && value[size_value - 11] != '1')
			ft_real_unitaire(value, buf, size_value - 10);
		if (value[size_value - 10] != '0')
			ft_real_0(buf, 10);
	}
}

void	ft_palier_1_12(int size_value, char *value, char *buf)
{
	ft_palier_10_12(size_value, value, buf);
	ft_palier_7_9(size_value, value, buf);
	ft_palier_4_6(size_value, value, buf);
	ft_palier_1_3(size_value, value, buf);
}
