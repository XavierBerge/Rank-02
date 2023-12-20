#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
	int i = 0; 
	int len = 0; 
	char *copy; 

	while(src[len])
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return NULL;
	while (src[i])
	{
		copy[i] = src[i]; 
		i++; 
	}
	copy[i] = '\0';
	return (copy);
}


int main(void)
{
	char *src = "test test test"; 

	char *result = ft_strdup(src);

	printf("%s\n", result);
}
