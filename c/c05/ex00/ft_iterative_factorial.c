/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:43:52 by bledda            #+#    #+#             */
/*   Updated: 2021/01/25 17:03:58 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factoriel;

	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		i = 1;
		factoriel = 1;
		while (i <= nb)
		{
			factoriel = factoriel * i;
			i++;
		}
		return (factoriel);
	}
	return (0);
}
