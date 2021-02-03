/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:43:37 by bledda            #+#    #+#             */
/*   Updated: 2021/01/26 10:58:29 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int j;

	j = ac - 1;
	i = 0;
	while (j != 0)
	{
		if (av[j][i] == '\0')
		{
			j--;
			i = 0;
			write(1, "\n", 1);
		}
		else
		{
			write(1, &av[j][i], 1);
			i++;
		}
	}
	return (0);
}