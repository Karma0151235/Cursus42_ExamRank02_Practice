#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int size = start - end, i = 0, *tabs;
	if (size < 0)
		size *= -1;
	size++;
	tabs = (int *) malloc(sizeof(int) * size);
	if (!tabs)
		return (NULL);
	while (i < size)
	{
		if (start < end)
			tabs[i] = end--;
		else
			tabs[i] = end++;
		i++;
	}
	return (tabs);
}