/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:43:35 by sabenet           #+#    #+#             */
/*   Updated: 2021/02/07 17:45:22 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rush(int x, int y)
{
	if (y >= 1)
		line_x(x, "A", "B", "A");
	if (y >= 3)
		line_y(x, y, "B", "B");
	if (y >= 2)
		line_x(x, "C", "B", "C");
}
