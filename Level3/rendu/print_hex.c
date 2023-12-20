#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void	print_hex(int n)
{

	if (n >= 16)
	{
		print_hex(n / 16);
		print_hex(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + '0'));
		else
			ft_putchar((n - 10 + 'a'));
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
