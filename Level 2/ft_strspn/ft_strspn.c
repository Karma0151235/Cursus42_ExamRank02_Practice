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

size_t ft_strcspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i] != '\0' && ft_inset(s[i], accept) == 1)
        i++;
    return (i);
}