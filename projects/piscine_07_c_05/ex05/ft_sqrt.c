#include <stdio.h>

int ft_sqrt(int nb)
{
    int r;

    r = 0;
    if (nb > 0) 
    {    
        while (r * r <= nb)
        {
            if (r * r == nb)
                return (r);
            else if (r > 46340) // 46341² já ultrapassa o max int (2147483647)
                return (0);
            r++;
        }
    }
    return (0);
}

int main(void)
{
    printf("%d\n", ft_sqrt(4));
}