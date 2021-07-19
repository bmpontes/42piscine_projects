#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		c;
	char	a;
	char	b;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			a = (str[c] / 16) + '0';
			b = (str[c] % 16);
			if (b < 10)
				b += '0';
			else
				b += 'a' - 10;
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
		else
			write(1, &str[c], 1);
		c++;
	}
}
