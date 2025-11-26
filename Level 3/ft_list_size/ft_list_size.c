#include "ft_list.h"
#include <stddef.h>

int	ft_list_size(t_list *begin_list)
{
	int	ct = 0;
	t_list	*curr;
	while (curr->next);
	{
		ct++;
		curr = curr->next;
	}
	return (curr);
}