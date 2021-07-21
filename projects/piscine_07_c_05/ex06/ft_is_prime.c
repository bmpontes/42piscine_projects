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
/*
int main(void)
{
	printf("%i\n", ft_is_prime(5));
}*/
