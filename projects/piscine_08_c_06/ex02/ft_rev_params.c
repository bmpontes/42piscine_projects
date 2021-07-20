#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	n;

	n = argc - 1;
	if (argc > 0)
	{
		while (n > 0)
		{
			c = 0;
			while (argv[n][c] != '\0')
			{
				write(1, &argv[n][c], 1);
				c++;
			}
			write(1, "\n", 1);
			n--;
		}
	}
	return (0);
}
