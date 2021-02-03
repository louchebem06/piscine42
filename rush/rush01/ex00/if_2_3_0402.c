/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_2_3_0402.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:50:18 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 15:51:13 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	if_2_3_0402_col(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (i < 5)
	{
		if (map[j][i] == 3 && map[j + 5][i] == 2 && map[j + 1][i] == 2 && map[j + 3][i] == 4)
		{
			map[j + 2][i] = 3;
			map[j + 4][i] = 1;
		}
		i++;
	}
}

void	if_2_3_0402_lig(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (j < 5)
	{
		if (map[j][i] == 3 && map[j][i + 5] == 2 && map[j][i + 1] == 2 && map[j][i + 3] == 4)
		{
			map[j][i + 2] = 3;
			map[j][i + 4] = 1;
		}
		j++;
	}
}

void	if_2_3_0402(int map[6][6])
{
	if_2_3_0402_col(map);
	if_2_3_0402_lig(map);
}
