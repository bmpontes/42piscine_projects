#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a1 = 30;
	int	b1 = 15;
	int	*a = &a1; 
	int	*b = &b1;

	printf("%u\n", *a);
	printf("%u\n", *b);
	ft_swap(a, b);
	printf("%u\n", *a);
	printf("%u\n", *b);
}
