#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int div;
    int c;

    div = 0;
    c = 1;
    while (c <= nb)
    {
        if (nb % c == 0)
            div++;
        c++;
    }
    if (div == 2)
        return (nb);
    else
    {
        nb++;
        ft_find_next_prime(nb);
    }
}

int main(void)
{
    printf("%d\n", ft_find_next_prime(20));
}