#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int teste;
	
	teste = 1;
	printf("%d\n", teste);
	ft_ft(&teste);
	printf("%d", teste);
}

