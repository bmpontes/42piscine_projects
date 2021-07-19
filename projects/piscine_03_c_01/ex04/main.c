#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a1 = 30;
	int	b1 = 15;
	int	*a = &a1;
	int	*b = &b1;

	printf("%d\n", a1);
	printf("%d\n", b1);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
