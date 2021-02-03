/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:24:54 by bledda            #+#    #+#             */
/*   Updated: 2021/01/25 17:11:07 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int nbr;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = 1;
		nbr = nb;
		while (i < power)
		{
			nbr = nbr * nb;
			i++;
		}
		return (nbr);
	}
}
