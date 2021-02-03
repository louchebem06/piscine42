/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:58:03 by bledda            #+#    #+#             */
/*   Updated: 2021/01/25 17:05:37 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		if (nb == 1)
			return (nb);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
