#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*i = lst, *j = lst;
	int temp = 0;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (cmp(i->data, j->data) > 0)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
			j = j->next;
		}
		i = i->next;
	}
	return (lst);
}