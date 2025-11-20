#include <stddef.h>

int ft_inset(char c, char *set)
{
    int i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        if (ft_inset(s1[i], s2) == 1)
            return (&s1[i]);
        i++;
    }
    return (NULL);
}