#include <stdio.h>
#include <stdlib.h>
char		**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}



int main(void)
{
    char input[] = "     Hello World! This is a test    .    ";
    char **result = ft_split(input);

    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]); // Libérer la mémoire allouée pour chaque mot
            i++;
        }

        free(result); // Libérer la mémoire allouée pour le tableau de pointeurs
    }
    else
    {
        printf("Allocation de mémoire échouée.\n");
    }

    return 0;
}

