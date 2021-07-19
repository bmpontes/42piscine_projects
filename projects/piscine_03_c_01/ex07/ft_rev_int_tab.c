void	ft_rev_int_tab(int *tab, int size)
{
	int	p;	
	int	u;
	int	aux;	

	p = 0;
	u = size - 1;
	while (p < u)
	{
		aux = tab[p];
		tab[p] = tab[u];
		tab[u] = aux;
		p++;
		u--;
	}
}
