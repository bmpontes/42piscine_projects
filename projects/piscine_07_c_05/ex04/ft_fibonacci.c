#include <stdio.h>

int	ft_fibonacci(int	index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int main(void)
{
	printf("0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ");
   	printf("89, 144, 233, 377, 610, 987, 1597, 2584\n\n");
	printf("Posicao: 1 - %i", ft_fibonacci(1));
}*/
