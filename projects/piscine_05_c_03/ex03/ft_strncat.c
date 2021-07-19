char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
		c++;
	while (nb > 0 && src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
		nb--;
	}
	dest[c] = '\0';
	return (dest);
}
