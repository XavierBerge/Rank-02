#include <stddef.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (char *)s;
		s++;
	}
	return NULL;
}

size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0; 

	while(s[i])
	{
		if (ft_strchr(accept, s[i] == 0))
				break;
		i++;
	}
	return (i);
}

int main(void)
{
	const char *str = "Hello, World!";
	const char *accept = "abcdefghijklmnopqrstuvwxyz";


	// Testing ft_strspn
	size_t result_strspn = ft_strspn(str, accept);
	printf("Length of initial segment containing only characters from accept: %zu\n", result_strspn);

	return 0;
}
