#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 0;
	if (nb > 0)
	{
		while (r * r <= nb)
		{
			if (r * r == nb)
				return (r);
			else if (r > 46340)
				return (0);
			r++;
		}
	}
	return (0);
}
