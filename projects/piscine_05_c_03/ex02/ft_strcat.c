char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
