/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:16:30 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 08:17:12 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	angle_1(int map[6][6], int *error)
{
	if ((map[0][1] == 1 && map[1][0] != 1) ||
	(map[1][0] == 1 && map[0][1] != 1))
		*error = 1;
	if ((map[0][4] == 1 && map[1][5] != 1) ||
	(map[1][5] == 1 && map[0][4] != 1))
		*error = 1;
	if ((map[4][0] == 1 && map[5][1] != 1) ||
	(map[5][1] == 1 && map[4][0] != 1))
		*error = 1;
	if ((map[4][5] == 1 && map[5][4] != 1) ||
	(map[5][4] == 1 && map[4][5] != 1))
		*error = 1;
}
