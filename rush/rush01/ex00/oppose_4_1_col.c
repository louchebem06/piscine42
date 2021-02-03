/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oppose_4_1_col.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:50:38 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 08:51:05 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	oppose_4_1_col(int map[6][6], int *error)
{
	if (map[0][1] == 4 && map[5][1] != 1)
		*error = 1;
	if (map[0][2] == 4 && map[5][2] != 1)
		*error = 1;
	if (map[0][3] == 4 && map[5][3] != 1)
		*error = 1;
	if (map[0][4] == 4 && map[5][4] != 1)
		*error = 1;
	if (map[5][1] == 4 && map[0][1] != 1)
		*error = 1;
	if (map[5][2] == 4 && map[0][2] != 1)
		*error = 1;
	if (map[5][3] == 4 && map[0][3] != 1)
		*error = 1;
	if (map[5][4] == 4 && map[0][4] != 1)
		*error = 1;
}