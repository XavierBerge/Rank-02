#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int swap;
	while(i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

int main(void)
{
	int array[] = {12, 8, 75, 3};
	int i = 0;
	int size = sizeof(array) / sizeof(array[0]);


	while(i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	sort_int_tab(array, 4);
	printf("\n");
	i = 0; 
	while(i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
