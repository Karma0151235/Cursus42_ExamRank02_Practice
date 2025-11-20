#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        i = ft_strlen(av[1]) - 1;
        while (i >= 0)
        {
            ft_putchar(av[1][i]);
            i--;
        }
    }
    ft_putchar('\n');
    return (0);
}