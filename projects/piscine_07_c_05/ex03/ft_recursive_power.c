#include <stdio.h>

int	ft_recursive(int aux, int nb, int power)
{
	if (power > 0)
	{	
		aux = aux * nb;
		power--;
		ft_recursive(aux, nb, power);
	}
	else
		return (aux);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive(1, nb, power));
}
/*int	main(void)
{
	printf("%d\n", ft_recursive_power(10, 0));
    return (0);
}*/
