/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:20:05 by bledda            #+#    #+#             */
/*   Updated: 2021/01/27 11:09:35 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcount(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		total_sizes(char **strs, int size, char *sep)
{
	int i;
	int sizes;

	i = 0;
	sizes = 0;
	while (i != size)
	{
		sizes = sizes + ft_strcount(strs[i]);
		i++;
	}
	sizes += (ft_strcount(sep) * (size - 1));
	return (sizes + 1);
}

void	string_add(int size, char **strs, char *string, char *sep)
{
	int i;
	int j;
	int i2;

	i = 0;
	j = 0;
	i2 = 0;
	while (j != size)
	{
		if (strs[j][i] != '\0')
			string[i2++] = strs[j][i++];
		else
		{
			j++;
			i = 0;
			while (sep[i] != '\0' && j != size)
				string[i2++] = sep[i++];
			i = 0;
		}
	}
	string[i2] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		sizes;

	if (size == 0)
	{
		string = malloc(sizeof(char) * 1);
		if (string == 0)
			return (0);
		string[0] = '\0';
		return (string);
	}
	sizes = total_sizes(strs, size, sep);
	string = malloc(sizeof(char) * sizes);
	if (string == 0)
		return (0);
	string_add(size, strs, string, sep);
	return (string);
}
