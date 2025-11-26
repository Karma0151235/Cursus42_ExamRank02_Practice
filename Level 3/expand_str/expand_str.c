#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i = 0;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0, space = 0;
		while (av[1][i] <= 32)
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= 32)
				space = 1;
			if (!(av[1][i] <= 32))
			{
				if (space == 1)
					ft_putstr("   ");
				space = 0;
				ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}