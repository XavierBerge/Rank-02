#include <stdio.h>
int	max(int *tab, unsigned int len)
{
	unsigned int i = 0; 
	int result = tab[i]; 

	if (len == 0)
		return (0)
	while(i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int main(void)
{
	int tab[] = {1, 8, 12, 16};
	unsigned int len = 4;

	int result = max(tab, len);

	printf("%d\n", result);
}
