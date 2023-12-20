#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list;
	list = begin_list;

	while(list)
	{
		(*f)(list->data);
		list = list->next;
	}
}

void print_data(void *data)
{
	printf("%d\n", *(int *)data);
}
int main(void)
{
	int	data1 = 42; 
   	int data2 = 123; 
	int data3 = 789; 

	t_list	*node1 = malloc(sizeof(t_list));
	t_list  *node2 = malloc(sizeof(t_list));
	t_list  *node3 = malloc(sizeof(t_list));

	node1->data = &data1;
	node1->next= node2;

	node2->data = &data2;
	node2->next= node3;

	node3->data = &data3;
	node3->next= NULL;

	ft_list_foreach(node1, print_data);

	free(node1);
	free(node2);
	free(node3);
}

