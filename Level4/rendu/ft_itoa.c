#include <stdlib.h>
#include <stdio.h>

int	get_digits(int n)
{
	int i;

	i = 0; 
	if (n == 0)
		i = 1; 
	while (n != 0)
	{
		n /= 10; 
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	char *str;
	int len;
	long int n; 

	n = nbr; 
	len = get_digits(n);
    if (n < 0)
	{
		n *= -1;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;
	str[len + 1] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}

int main(void)
{
	char *result;

	result = ft_itoa(-128);
	printf("%s\n", result);
}
		

