#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_rotone(char c)
{
    if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
        return (c + 1);
    else if ((c == 'z') || (c == 'Z'))
        return ('a');
    else
        return (c);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 1)
    {
        while (av[1][i] != '\0')
        {
            ft_putchar(ft_rotone(av[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}