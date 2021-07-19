#include <stdio.h>

int ft_recursive(int aux, int nb)
{
    if (nb > 0)
	{
        aux *= nb--;
        ft_recursive(aux, nb);   
	}
	else
        return (aux);
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
		return (0);
	else if (nb <= 1) 
		return (1);
	return(ft_recursive(1, nb));
}

int main(void)
{
    int nb;

    nb = 4;
    printf("%d\n",ft_recursive_factorial(nb));
}