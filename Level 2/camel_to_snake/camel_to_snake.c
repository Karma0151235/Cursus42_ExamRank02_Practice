#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (!(av[1][i] >= 'A' && av[1][i] <= 'Z'))
                ft_putchar(av[1][i]);
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                ft_putchar('_');
                ft_putchar(av[1][i] + 32);
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}