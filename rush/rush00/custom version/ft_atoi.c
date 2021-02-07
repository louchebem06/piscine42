/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:12:31 by bledda            #+#    #+#             */
/*   Updated: 2021/02/07 17:18:58 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int atoi;
	int i;
	int symbole;

	i = 0;
	symbole = 1;
	atoi = 0;
	while ((str[i] == '\f') || (str[i] == '\n') ||
			(str[i] == '\t') || (str[i] == '\r') ||
			(str[i] == '\v') || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			symbole = symbole * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - 48;
		i++;
	}
	return (atoi * symbole);
}
