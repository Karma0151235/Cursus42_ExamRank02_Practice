#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_rot13(char c)
{
    if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
        return (c + 13);
    else if ((c >= 'n' && c <= 'z') || (c >= 'n' && c <= 'z'))
        return (c - 13);
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
            ft_putchar(ft_rot13(av[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}