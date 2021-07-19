void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	c;

	c = 0;
	while (c < (size - 1))
	{
		if (tab[c] > tab[c + 1])
		{
			aux = tab[c + 1];
			tab[c + 1] = tab[c];
			tab[c] = aux;
			c = 0;
		}
		else
			c++;
	}
}
