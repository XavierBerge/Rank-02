#include <stdio.h>
#include <stdlib.h>

typedef struct s_list 
{
    int data;
    struct s_list *next;
} t_list;

void print_list(t_list *head) 
{
    while (head != NULL) 
	{
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int)) 
{
    int swap;
    t_list *tmp;

    tmp = lst;
    while (lst->next != NULL) 
	{
        if (((*cmp)(lst->data, lst->next->data)) == 0) 
		{
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        } else
            lst = lst->next;
    }
    lst = tmp;
    return lst;
}

int ascending(int a, int b) 
{
    return (a <= b);
}

int main(void) 
{
    t_list *head = (t_list *)malloc(sizeof(t_list));
    head->data = 3;
    head->next = (t_list *)malloc(sizeof(t_list));
    head->next->data = 1;
    head->next->next = (t_list *)malloc(sizeof(t_list));
    head->next->next->data = 2;
    head->next->next->next = NULL;

    printf("List before sorting: ");
    print_list(head);

    t_list *sorted_list = sort_list(head, ascending);

    printf("List after sorting: ");
    print_list(sorted_list);

    free(sorted_list->next);
    free(sorted_list);

    return 0;
}

