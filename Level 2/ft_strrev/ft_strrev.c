int ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

void ft_swap(char *s1, char *s2)
{
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

char *ft_strrev(char *str)
{
    int i = 0, j = ft_strlen(str) - 1;
    while (i < j)
    {
        ft_swap(&str[i], &str[j]);
        i++;
        j--;
    }
    return (str);
}