#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main (void)
{
	int tab[] = {5, 7, 1, 9, 7, 4, 7};
	int size = 7;
	int i = 0;
	
	while (i == 0 || i < (size))
    	{
    		printf("%d ", tab[i]);
        	i++;
        }
	printf("\n");
	
	ft_sort_int_tab(tab, size);
	
	i = 0;
    	while (i == 0 || i < (size))
    	{
    		printf("%d\n", tab[i]);
        	i++;
        }
}
