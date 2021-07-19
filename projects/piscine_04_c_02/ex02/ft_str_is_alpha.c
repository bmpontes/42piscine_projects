int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || str[c] > 'z' || (str[c] < 'a' && str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}
