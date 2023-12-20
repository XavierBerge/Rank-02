#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	n = 0;


	if (start < end)
		n = end - start;
	else
		n = start - end;

	array = malloc(sizeof(int) * (n + 1));
	while(start != end)
	{
		*array++ = start;	
		if (start < end)
			start++; 
		else
			start--;
	}
	*array = end;
	return (array - n); 
}

int main(void)
{
	int start = 1; 
	int end = 8;
	int *result = ft_range(start, end);
	int i = 0; 

	while(result[i])
	{
		printf("%d ", result[i]);
		i++;
	}
}
