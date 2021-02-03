/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palier_13_25.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:42:51 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 15:42:53 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_palier_13_15(int size_value, char *value, char *buf)
{
	if (size_value >= 15)
	{
		if (value[size_value - 15] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 15);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 14)
	{
		if (value[size_value - 14] != '0')
			ft_real_dizaine(value, buf, size_value - 14);
	}
	if (size_value >= 13)
	{
		if (value[size_value - 13] != '0' && value[size_value - 14] != '1')
			ft_real_unitaire(value, buf, size_value - 13);
		if (value[size_value - 13] != '0')
			ft_real_0(buf, 13);
	}
}

void	ft_palier_16_18(int size_value, char *value, char *buf)
{
	if (size_value >= 18)
	{
		if (value[size_value - 18] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 18);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 17)
	{
		if (value[size_value - 17] != '0')
			ft_real_dizaine(value, buf, size_value - 17);
	}
	if (size_value >= 16)
	{
		if (value[size_value - 16] != '0' && value[size_value - 17] != '1')
			ft_real_unitaire(value, buf, size_value - 16);
		if (value[size_value - 16] != '0')
			ft_real_0(buf, 16);
	}
}

void	ft_palier_19_21(int size_value, char *value, char *buf)
{
	if (size_value >= 21)
	{
		if (value[size_value - 21] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 21);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 20)
	{
		if (value[size_value - 20] != '0')
			ft_real_dizaine(value, buf, size_value - 20);
	}
	if (size_value >= 19)
	{
		if (value[size_value - 19] != '0' && value[size_value - 20] != '1')
			ft_real_unitaire(value, buf, size_value - 19);
		if (value[size_value - 19] != '0')
			ft_real_0(buf, 19);
	}
}

void	ft_palier_22_24(int size_value, char *value, char *buf)
{
	if (size_value >= 24)
	{
		if (value[size_value - 24] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 24);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 23)
	{
		if (value[size_value - 23] != '0')
			ft_real_dizaine(value, buf, size_value - 23);
	}
	if (size_value >= 22)
	{
		if (value[size_value - 22] != '0' && value[size_value - 23] != '1')
			ft_real_unitaire(value, buf, size_value - 22);
		if (value[size_value - 22] != '0')
			ft_real_0(buf, 22);
	}
}

void	ft_palier_13_24(int size_value, char *value, char *buf)
{
	ft_palier_22_24(size_value, value, buf);
	ft_palier_19_21(size_value, value, buf);
	ft_palier_16_18(size_value, value, buf);
	ft_palier_13_15(size_value, value, buf);
}
