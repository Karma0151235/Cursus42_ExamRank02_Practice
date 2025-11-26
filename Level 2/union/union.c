#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	seen_curr(char *s, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int seen_other(char *s, char c)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i] != '\0')
		{
			if (!seen_curr(av[1], av[1][i], i))
				ft_putchar(av[1][i]);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (!seen_curr(av[2], av[2][i], i) && !seen_other(av[1], av[2][i]))
				ft_putchar(av[2][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
