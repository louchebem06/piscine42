/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:36:26 by bledda            #+#    #+#             */
/*   Updated: 2021/01/20 19:09:17 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			check = 1;
		else
			check = 0;
		if (check == 0)
			break ;
		i++;
	}
	return (check);
}
