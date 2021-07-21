#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *range;
    int c;

    if (min >= max)  
        return (0);
    range = (int *) malloc(sizeof(int) * (max - min));
    c = 0;
    while (min < max)
    {
        range[c] = min;
        min++;
        c++; 
    }
    return(range);
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
	printf("Teste (%i , %i)\n\n", min, max);
    
    test = ft_range(min, max);
    size = max - min;
    for (i = 0; i < size - 1; i++)
	{
		printf("%d | ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}*/