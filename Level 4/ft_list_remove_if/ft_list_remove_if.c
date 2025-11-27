#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if ((*begin_list == NULL) || (begin_list == NULL))
		return ;
	t_list	*curr = *begin_list;
	t_list	*prev = NULL;
	t_list	*temp;
	while (curr)
	{
		if (cmp(curr->data, data_ref) == 0)
		{
			temp = curr;
			curr = curr->next;
			
			if (prev == NULL)
				*begin_list = curr;
			else
				prev->next = curr;
			free(temp);
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}