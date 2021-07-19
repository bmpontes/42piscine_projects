#include <unistd.h>

int	ft_count(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

void    ft_checkerro(char *base)
{
    int c;   
    
    c = 0;
    while (base[c] != '\0')
    {
        if (base[c] == '+' || base[c] == '-' || base[c] == base[c + 1])
            return (0);
        c++;        
    }
    if (c < 2)
        return (0);
    return (1);
}

void    ft_ptnbr_base(int nbr, char *base)
{
    int len;

    if (ft_checkerro(base) == 1)
    {
        len = ft_count(base);
        if (nbr < 0)
        {
            write(1, "-", 1);
        }
    }  
}

int main(void)
{ 
    ft_putnbr_base(5464, "012547");
}