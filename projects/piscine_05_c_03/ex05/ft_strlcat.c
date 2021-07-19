unsigned int	ft_strcount(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strcount(dest))
		return (size + ft_strcount(src));
	c = ft_strcount(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strcount(dest) + ft_strcount(&src[d]));
}
