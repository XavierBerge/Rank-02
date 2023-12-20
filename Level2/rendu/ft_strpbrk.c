#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return NULL;

	while(*s1)
	{
		int i = 0; 
		while(s2[i])
		{
			if (*s1 == s2[i])
			return ((char *) s1);
		i++;
		}
		s1++;
	}
	return (0);
}

int main(void)
{
	char *str1 = "Salut les fous";
	char *str2 = "xyf";

	char *result = ft_strpbrk(str1, str2);
	printf("%s\n", result);
}
		
