#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (0);
}

int main(int ac, char **av)
{
	int times = 0;
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (ft_case(av[1][i]) == 1)
				times = (av[1][i] - 'A') + 1;
			else if (ft_case(av[1][i]) == 2)
				times = (av[1][i] - 'a') + 1;
			else
				times = 1;
			while (times > 0)
			{
				ft_putchar(av[1][i]);
				times--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}