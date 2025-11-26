#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *s)
{
	int i = 0, sum = 0, sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && !(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) && (s[i] >= '0' && s[i] <= '9'))
	{
		sum = sum * 10 + (s[i] - '0');
		i++;
	}
	return (sum * sign);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = ft_atoi(av[1]), i = 0;
		char *base = "0123456789abcdef";
		char ans[32];
		if (num == 0)
			ft_putchar('0');
		while (num > 0)
		{
			ans[i++] = base[num % 16];
			num /= 16;
		}
		while (i--)
			ft_putchar(ans[i]);
	}
	ft_putchar('\n');
	return (0);
}