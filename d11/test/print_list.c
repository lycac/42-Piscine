#include "list.h"

void ft_putstr(char *str);

void print_list(t_list *list)
{
	while(list)
	{
	ft_putstr(list->str);
	list = list->next;
	}
}
