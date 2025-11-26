#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = atoi(av[1]), b = atoi(av[2]);
		int start = 0;
		if (a > b)
			start = b;
		else
			start = a;
		while (start > 0)
		{
			if ((a % start == 0) && (b % start == 0))
			{
				printf("%d", start);
				break;
			}
			start--;
		}
	}
	printf("\n");
	return (0);
}