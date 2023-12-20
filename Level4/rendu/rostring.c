#include <unistd.h>

int	ft_isblank(char c)
{
	return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
	int i = 0;
	int len_first_word = 0;
	if (argc > 1 && argv[1][0])
	{
		while (argv[1][i])
		{
			while (ft_isblank(argv[1][i]))
					i++;
			if (argv[1][i] && !ft_isblank(argv[1][i]))
			{
				if (len_first_word == 0)
					while(argv[1][i] && !ft_isblank(argv[1][i++]))
						len_first_word++;
				else
				{
					while(argv[1][i] && !ft_isblank(argv[1][i]))
							write(1, &argv[1][i++], 1);
					write(1, " ", 1);
				}
			}
		}
		i = 0; 
		while(ft_isblank(argv[1][i]))
			i++;
		while (len_first_word--)
			write(1, &argv[1][i++], 1);
	}
	write (1, "\n", 1);
}




