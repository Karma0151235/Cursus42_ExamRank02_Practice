#include <stdlib.h>

int	count_words(char *str)
{
	int	i = 0, ct = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		ct++;
		while (str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (ct);
}

char	*word(char *s)
{
	int i = 0;
	char	*word;
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
		word[i] = s[i++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int words = count_words(str), i = 0, j = 0;
	char	**arr;
	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			arr[j] = word(&str[i]);
			j++;
		}
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
