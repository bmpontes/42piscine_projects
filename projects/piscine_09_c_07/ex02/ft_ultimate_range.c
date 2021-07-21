#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *aux;
    int c;

    if (min >= max || *range == NULL)   
        return (0);
    aux = (int *) malloc(sizeof(int) * (max - min));
    c = 0;
    while (min < max)
    {
        aux[c] = min;
        min++;
        c++; 
    }
    *range = aux;
    return(c);
}
/*
int	main(void)
{
	int *test;
	int i;
    int size;
    int min;
    int max;
     
    min = 2;
    max = 7;
    size = ft_ultimate_range(NULL, min, max);
	printf("Teste (%i , %i) - ", min, max);
    printf("%d\n\n", size);
    for (i = 0; i < size - 1; i++)
	{
		printf("%d | ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}*/