/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palier_37_39.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 16:03:18 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 16:03:20 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_palier_37_39(int size_value, char *value, char *buf)
{
	if (size_value >= 39)
	{
		if (value[size_value - 39] != '0')
		{
			ft_real_unitaire(value, buf, size_value - 39);
			ft_real_0(buf, 3);
		}
	}
	if (size_value >= 38)
	{
		if (value[size_value - 38] != '0')
			ft_real_dizaine(value, buf, size_value - 38);
	}
	if (size_value >= 37)
	{
		if (value[size_value - 37] != '0' && value[size_value - 38] != '1')
			ft_real_unitaire(value, buf, size_value - 37);
		if (value[size_value - 37] != '0')
			ft_real_0(buf, 37);
	}
}
