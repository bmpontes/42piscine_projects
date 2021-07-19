void	ft_putstr(char *str);

int main (void)
{
	char str[] = "Teste 1, teste1!";
	char *put_str;

	put_str = str;
	ft_putstr(put_str);
}
