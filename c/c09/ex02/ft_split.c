/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:49:17 by bledda            #+#    #+#             */
/*   Updated: 2021/02/01 12:49:19 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sepateur(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != 0)
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count(char *str, char *charset)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != 0)
	{
		while (ft_sepateur(str[i], charset) == 1 && str[i] != 0)
			i++;
		if (ft_sepateur(str[i], charset) == 0 && str[i] != 0)
			c++;
		while (ft_sepateur(str[i], charset) == 0 && str[i] != 0)
			i++;
	}
	return (c);
}

void	ft_copymot(char *str, char *charset, char *string, int i_str)
{
	int i;

	i = 0;
	while (ft_sepateur(str[i_str], charset) == 0 && str[i_str] != 0)
	{
		string[i] = str[i_str];
		i++;
		i_str++;
	}
	string[i] = '\0';
}

int		ft_skip(char *str, char *charset, int i_str)
{
	while (ft_sepateur(str[i_str], charset) == 1 && str[i_str] != 0)
		i_str++;
	return (i_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int		j;
	int		i_str;
	int		i;

	if (!(string = malloc(sizeof(char *) * (ft_count(str, charset) + 1))))
		return (0);
	i_str = 0;
	j = 0;
	while (str[i_str] != 0 && ft_count(str, charset) != 0 && str[i_str] != 0)
	{
		i = 0;
		i_str = ft_skip(str, charset, i_str);
		while (ft_sepateur(str[i_str], charset) == 0 && str[i_str] != 0)
		{
			i++;
			i_str++;
		}
		if (!(string[j] = malloc(sizeof(char) * (i + 1))))
			return (0);
		ft_copymot(str, charset, string[j++], i_str - i);
		i_str = ft_skip(str, charset, i_str);
	}
	string[j] = 0;
	return (string);
}
