#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] != '\0')
        {
            if (ft_isalpha(av[1][i]) == 1)
            {
                if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                    ft_putchar(av[1][i] + 32);
                else
                    ft_putchar(av[1][i] - 32);
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}