#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 30;
	int	b = 0;
	int	div1;
	int	mod1;
	int	*div = &div1;
	int	*mod = &mod1;

	printf("%d\n", a);
	printf("%d\n", b);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	printf("%d\n", a);
        printf("%d\n", b);
}
