#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    char *dup;
    int i = 0;
    dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!dup)
        return (NULL);
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = src[i];
    return (dup);
}