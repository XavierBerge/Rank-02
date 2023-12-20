#include <stddef.h>
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++; 
	}
	return (i);
}

int main(void)
{
	char *s = "Toto le plus beau le plus fort";
	char *reject = "ayz";

	size_t result = ft_strcspn(s, reject);

	printf("%zu\n", result);
}



