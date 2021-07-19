#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	sinal;
	int	aux;

	c = 0;
	sinal = 1;
	aux = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sinal *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		aux = (str[c] - '0') + (aux * 10);
		c++;
	}
	return (aux * sinal);
}

int	main(void)
{
	printf("%d\n", ft_atoi(" ----+1234ab567"));
	return (0);
}
