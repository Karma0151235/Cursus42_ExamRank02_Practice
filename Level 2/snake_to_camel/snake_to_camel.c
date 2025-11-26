#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] != '_')
				ft_putchar(av[1][i]);
			if (av[1][i] == '_')
			{
				ft_putchar(ft_toupper(av[1][i + 1]));
				i++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}