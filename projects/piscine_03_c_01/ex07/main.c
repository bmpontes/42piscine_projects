#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main (void)
{
	int tab[] = {4, 0, 1, 9, 3};
	int size = 5;
	int i = 0;
	
	ft_rev_int_tab(tab, size);
	
    	while (i < (size -1))
    	{
    		printf("%d, ", tab[i]);
        	i++;
        }
    	printf("%d\n", tab[size - 1]);	
}
