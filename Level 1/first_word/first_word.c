#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	int is_word;

	i = 0;
	is_word = 0;
	if (ac == 2)
	{
		while ((av[1][i] != '\0') && (av[1][i] == '\t' || av[1][i] == ' '))
			i++;
		while ((av[1][i] != '\0') && (av[1][i] != '\t' || av[1][i] != ' '))
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}