#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i = 0, j = 0;
		while (av[1][i] != '\0' && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		j = i;
		while (av[1][i] != '\0')
		{
			while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
				i++;
			while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
				i++;
			while ((av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')) && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
			{
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
					ft_putchar(av[1][i++]);
				ft_putchar(' ');
				i++;
			}
		}
		while (av[1][j] != '\0' && (av[1][j] != ' ' && av[1][j] != '\t'))
			ft_putchar(av[1][j++]);
	}
	ft_putchar('\n');
	return (0);
}