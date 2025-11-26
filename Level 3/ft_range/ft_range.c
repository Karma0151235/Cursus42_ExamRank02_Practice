#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size = start - end, i = 0;
	int	*tabs;
	if (size < 0)
		size *= -1;
	size += 1;
	tabs = (int *)malloc(sizeof(int) * size);
	if (!tabs)
		return (NULL);
	while (i < size)
	{
		if (start < end)
			tabs[i] = start++;
		else
			tabs[i] = start--;
		i++;
	}
	return (tabs);
}