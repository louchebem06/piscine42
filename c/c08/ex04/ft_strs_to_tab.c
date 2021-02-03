/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:49:30 by bledda            #+#    #+#             */
/*   Updated: 2021/01/28 16:12:59 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (tab == 0)
		return (0);
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*par;

	i = 0;
	par = malloc(sizeof(t_stock_str) * (ac + 1));
	if (par == 0)
		return (0);
	while (i < ac)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].copy = ft_strdup(av[i]);
		par[i].str = av[i];
		i++;
	}
	par[i].str = 0;
	return (par);
}
