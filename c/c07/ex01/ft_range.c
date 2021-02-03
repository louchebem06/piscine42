/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:21:53 by bledda            #+#    #+#             */
/*   Updated: 2021/01/27 06:44:06 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *p;
	int i;
	int taille;

	i = 0;
	p = NULL;
	taille = max - min;
	if (min >= max)
	{
		return (p);
	}
	p = malloc(sizeof(int) * taille);
	if (p == 0)
		return (0);
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
