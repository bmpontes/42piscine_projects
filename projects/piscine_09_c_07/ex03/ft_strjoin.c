#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		c;
	int		n;
	int		i;
	int		m;

	result = malloc(sizeof(char) * size);
	i = 0;
	n = -1;
	while (n++ < size - 1)
	{
		c = 0;
		while (strs[n][c] != '\0')
			result[i++] = strs[n][c++];
		m = 0;
		while (sep[m] && n != size - 1)
			result[i++] = sep[m++];
	}
	result[i] = '\0';
	return (result);
}
/*
int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "||";
	index = 0;
	while (index <= 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}*/
