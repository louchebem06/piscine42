/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:16:30 by bledda            #+#    #+#             */
/*   Updated: 2021/01/31 09:16:32 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HEADER_H
# define _HEADER_H

# define BUF_SIZE 4096

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	*ft_arg_main(int ac, char **av, int *error, char lang[3]);
int		ft_strlen(char *str);
void	ft_real_unitaire(char *value, char *buf, int section);
void	ft_real_0(char *buf, int zero);
void	ft_real_dizaine(char *value, char *buf, int section);
void	ft_palier_1_12(int size_value, char *value, char *buf);
void	ft_palier_13_24(int size_value, char *value, char *buf);
void	ft_palier_25_36(int size_value, char *value, char *buf);
void	ft_palier_37_39(int size_value, char *value, char *buf);

#endif
