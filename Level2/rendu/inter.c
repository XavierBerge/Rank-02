#include <unistd.h>
#include <stdio.h>
int check(char *str, int pos, char c)
{
	while (pos > 0)
	{
		if(str[pos - 1] == c)
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
		int j; 

		while (argv[1][i])
		{
			j = 0; 
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (check(argv[1], i, argv[1][i]) == 0)
					{
						write(1, &argv[1][i], 1); 
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
	
				
