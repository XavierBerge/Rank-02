#include <unistd.h>
#include <stdio.h>
int check(char *str, int pos, char c)
{
	while (pos > 0)
	{
		if (str[pos - 1] == c)
			return (1);
		pos--;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0; 
		int j = 0; 
		while (argv[1][i])
		{
			if (check(argv[1], i, argv[1][i]) == 0)
					write(1, &argv[1][i++], 1);
			else
				i++;
		}
		while(argv[2][j])
		{
			if (check(argv[1], i, argv[2][j]) == 0)
			{
				if (check(argv[2], j, argv[2][j]) == 0)
					write(1, &argv[2][j++], 1);
				else 
					j++;
			}
			else
				j++;
		}
	}
	write(1, "\n", 1);
}
