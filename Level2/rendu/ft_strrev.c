#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0; 
	int len = 0; 
	char swap; 

	while(str[len])
		len++;
	while (i < len / 2)
	{
		swap = str[i];
		str[i] = str[len -1 - i];
		str[len -1 - i] = swap; 
		i++; 
	}
	return (str);
}

int main (void)
{
	char str[] = "caca"; 
	char *result = ft_strrev(str);
	
	printf("%s\n", result);
}
