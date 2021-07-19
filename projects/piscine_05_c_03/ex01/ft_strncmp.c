int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while (s1[c] == s2[c] && c < (n - 1) && s1[c] != '\0')
		c++;
	return (s1[c] - s2[c]);
}
