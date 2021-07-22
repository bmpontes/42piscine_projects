#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		c;

	dest = (char *) malloc(sizeof(char) * (*src));
	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	if (dest == NULL)
		return (NULL);
	return (dest);
}
/*
int main   (void)
{
    char *src;

    src = "teste";
    printf("%s\n", src);
    printf("%s\n", ft_strdup(src));
}*/
