#include <stdlib.h>
#include <stdio.h>
int	*ft_rrange(int start, int end)
{
	int	*array;
	int	n; 

	n = 0; 

	if (start < end) 
		n = end - start;
	else
		n = start - end; 
	array = malloc(sizeof(int) * (n + 1));
	while(start != end)
	{
		*array++ = end; 
		if (start < end)
			end--;
		else
			end++; 
	}
	*array = start; 
	return (array - n);
}

int main(void)
{
	int	start = 1;
	int	end = 4;
	int	i = 0; 

	int *result = ft_rrange(start, end);
	while (result[i])
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}


