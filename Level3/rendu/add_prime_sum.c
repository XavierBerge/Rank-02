#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_atoi(char *str)
{
	int res; 

	res = 0; 
	while(*str)
		res = res * 10 + (*str++ - 48);
	
	return res;
}

void putnbr(int n)
{
	if (n >= 10)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int isprime(int n)
{
	int	i = 2; 

	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0); 
		i++;
	}
	return (1);
}


int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int number = ft_atoi(argv[1]);
		int sum = 0;
		
		while (number > 0)
		{
			if(isprime(number))
				sum += number;
			number--;
		}
		putnbr(sum);
		write(1, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	write(1, "0\n", 2);
}

