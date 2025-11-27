#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long n = nbr, temp = n;
	int len = 0, flag = 0;
	char	*str;
	if (n < 0)
	{
		len++;
		n = -n;
		flag = 1;
	}
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';

	if (nbr == 0)
		str[0] = '0';
	if (flag == 1)
		str[0] = '-';

	while (n > 0)
	{
		str[--len] = (n % 10) + '0'; 
		n /= 10;
	}
	return (str);
}