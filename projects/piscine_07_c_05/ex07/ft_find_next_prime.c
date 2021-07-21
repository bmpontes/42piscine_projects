#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;
	int	c;

	div = 0;
	c = 1;
	while (c <= nb)
	{
		if (nb % c == 0)
			div++;
		c++;
	}
	if (div == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main(void)
{
	printf("%i\n", ft_find_next_prime(5));
}*/
