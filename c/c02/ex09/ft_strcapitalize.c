/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:03:30 by bledda            #+#    #+#             */
/*   Updated: 2021/01/21 09:15:44 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	ft_strupcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i - 1;
		if ((i == 0) || str[j] <= 47 || (str[j] >= 123 && str[j] <= 126) ||
			(str[j] >= 58 && str[j] <= 64) || (str[j] >= 91 && str[j] <= 96) || (str[j] == '\n'))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
#include <stdio.h>
int main(int ac, char **av)
{
	char str[] = "\thello";
	printf("%s", ft_strcapitalize(str));
}
