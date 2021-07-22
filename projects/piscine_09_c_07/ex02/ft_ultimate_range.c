#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*aux;
	int	c;

	if (min >= max || *range == NULL)
		return (0);
	if (*range == NULL)
		return (-1);
	aux = (int *) malloc(sizeof(int) * (max - min));
	c = 0;
	while (min < max)
	{
		aux[c] = min;
		min++;
		c++;
	}
	*range = aux;
	return (c);
}
/*
int	main(void)
{
	int *range;
	int size;

	size = ft_ultimate_range(&range, 5, 9);
	printf("Size = %d\n",size);
	return (0);	
}*/	
