#include <stdlib.h>
#include <unistd.h>

void	ft_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(char *tab[], int size)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	ft_sort_params(argv, argc);
	n = 1;
	while (n < argc)
	{
		ft_str(argv[n]);
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
