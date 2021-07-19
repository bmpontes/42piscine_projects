char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{	
		i = 0;
		while (str[c + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (&str[c]);
		}
		c++;
	}
	return (0);
}
