#ifndef _FT_H
# define _FT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 4096

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

#endif
