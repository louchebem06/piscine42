/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 06:58:00 by bledda            #+#    #+#             */
/*   Updated: 2021/02/07 17:29:44 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H

# include <unistd.h>

void	ft_putstr(char *str);
void	line_x(int x, char *left, char *inter, char *right);
void	line_y(int x, int y, char *left, char *right);
void	rush(int x, int y);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	line_y(int x, int y, char *left, char *right);
void	line_x(int x, char *left, char *inter, char *right);

#endif
