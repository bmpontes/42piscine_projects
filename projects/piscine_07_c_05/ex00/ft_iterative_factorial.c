#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int aux;

	aux = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		aux *= nb--;
	return (aux);
}

int main(void)
{
    int nb;

    nb = 10;
    printf("%d\n", ft_iterative_factorial(nb));
}