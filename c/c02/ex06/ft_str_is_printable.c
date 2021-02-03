/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:39:31 by bledda            #+#    #+#             */
/*   Updated: 2021/01/21 06:38:08 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			check = 1;
		else
			check = 0;
		if (check == 0)
			break ;
		i++;
	}
	return (check);
}
