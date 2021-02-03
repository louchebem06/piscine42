
#include "ft.h"

int	ft_atoi(char *str)
{
	int i;
	int atoi;

	i = 0;
	atoi = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - 48;
		i++;
	}
	return (atoi);
}
