/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:42:10 by bledda            #+#    #+#             */
/*   Updated: 2021/01/26 08:50:57 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb == 1)
		return (1);
	else if (nb == 0)
		return (0);
	else if (nb == 4)
		return (2);
	else if (nb == 9)
		return (3);
	else if (nb == 16)
		return (4);
	else
	{
		i = 1;
		while (i < (nb / 4))
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
