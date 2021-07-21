#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{	
		aux = aux * nb;
		power--;
	}
	return (aux);
}
/*
int main(void)
{
	printf("%d\n", ft_iterative_power(10, 0));
    return (0);
}*/
