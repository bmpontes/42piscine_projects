#include <stdio.h>

int	ft_strlen(char *str);

int main (void)
{
	char str[] = "Teste 1, teste1!";
	
	int nmr = ft_strlen(str);
	
	printf("%d\n", nmr);
}
