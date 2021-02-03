/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palier_26_38.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:43:09 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 15:43:10 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_palier_25_27(int size_value, char *value, char *buf)
{
	if (size_value >= 27)
	{
		if (value[size_value - 27] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 27);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 26)
	{
		if (value[size_value - 26] != '0')
			ft_real_dizaine(value, buf, size_value - 26);
	}
	if (size_value >= 25)
	{
		if (value[size_value - 25] != '0' && value[size_value - 26] != '1')
			ft_real_unitaire(value, buf, size_value - 25);
		if (value[size_value - 25] != '0')
			ft_real_0(buf, 25);
	}
}

void	ft_palier_28_30(int size_value, char *value, char *buf)
{
	if (size_value >= 30)
	{
		if (value[size_value - 30] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 30);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 29)
	{
		if (value[size_value - 29] != '0')
			ft_real_dizaine(value, buf, size_value - 29);
	}
	if (size_value >= 28)
	{
		if (value[size_value - 28] != '0' && value[size_value - 29] != '1')
			ft_real_unitaire(value, buf, size_value - 28);
		if (value[size_value - 28] != '0')
			ft_real_0(buf, 28);
	}
}

void	ft_palier_31_33(int size_value, char *value, char *buf)
{
	if (size_value >= 33)
	{
		if (value[size_value - 33] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 33);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 32)
	{
		if (value[size_value - 32] != '0')
			ft_real_dizaine(value, buf, size_value - 32);
	}
	if (size_value >= 31)
	{
		if (value[size_value - 31] != '0' && value[size_value - 32] != '1')
			ft_real_unitaire(value, buf, size_value - 31);
		if (value[size_value - 31] != '0')
			ft_real_0(buf, 31);
	}
}

void	ft_palier_34_36(int size_value, char *value, char *buf)
{
	if (size_value >= 36)
	{
		if (value[size_value - 36] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 36);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 35)
	{
		if (value[size_value - 35] != '0')
			ft_real_dizaine(value, buf, size_value - 35);
	}
	if (size_value >= 34)
	{
		if (value[size_value - 34] != '0' && value[size_value - 35] != '1')
			ft_real_unitaire(value, buf, size_value - 34);
		if (value[size_value - 34] != '0')
			ft_real_0(buf, 34);
	}
}

void	ft_palier_25_36(int size_value, char *value, char *buf)
{
	ft_palier_34_36(size_value, value, buf);
	ft_palier_31_33(size_value, value, buf);
	ft_palier_28_30(size_value, value, buf);
	ft_palier_25_27(size_value, value, buf);
}
