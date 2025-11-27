#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = ft_strlen(av[1]) - 1, pos = 0;
		while (i >= 0)
		{
			while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			while (i >= 0 && !(av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			pos = i;
			i++;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				while (av[1][i] != '\0' && !(av[1][i] == ' ' || av[1][i] == '\t'))
					ft_putchar(av[1][i++]);
				if (pos != -1)
					ft_putchar(' ');
			}
			i = pos;
		}
	}
	ft_putchar('\n');
	return (0);
}