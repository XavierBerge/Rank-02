#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0; 
		int letter;;
		
		while(argv[1][i])
		{
			letter = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter += argv[1][i] - 'A';

			while (letter-- > 0)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}


				
