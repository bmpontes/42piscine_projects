#include <stdio.h>

int ft_recursive(int a, int b, int index)
{
    int number;

    if (index > 1)
    {
        number = a + b;
        a = b;
        b = number;
        index--;
        ft_recursive(a, b, index);
    }
    else
        return(b);
}
int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    if (index > 1)
        ft_recursive(0, 1, index);
}

int main(void)
{
    printf("%d\n", ft_fibonacci(-2));
//    printf("%d\n", ft_recursive(0, 1, 10));
}