#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	n;

	n = 1;
	while (n != argc)
	{
		c = 0;
		while (argv[n][c] != '\0')
		{
			write(1, &argv[n][c], 1);
			c++;
		}
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
