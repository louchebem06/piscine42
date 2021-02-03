#include "ft_foreach.c"

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	nb2 = nb;
	if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
	}
	nb2 = nb2 % 10 + '0';
	write(1, &nb2, 1);
}

//void ft_foreach(int *tab, int length, void(*f)(int))

int main()
{
	
	ft_foreach(tab, 1337, &ft_putnbr);
}