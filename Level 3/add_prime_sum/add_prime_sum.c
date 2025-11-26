#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	nb = n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int	ft_atoi(char *s)
{
	int sign = 1;
	int	sum = 0;
	int	i = 0;

	while (s[i] != '\0' && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] != '\0' && !(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
	{
		sum = sum * 10 + (s[i] - '0');
		i++;
	}
	return (sum * sign);
}

int	is_prime(int n)
{
	if (n < 2)
		return (0);
	int x = 2;
	while (x <= (n / 2))
	{
		if (n % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2 && ft_atoi(av[1]) > 0)
	{
		int n = ft_atoi(av[1]);
		int x = 1;
		int sum = 0;
		while (x <= n)
		{
			if (is_prime(x))
				sum += x;
			x++;
		}
		ft_putnbr(sum);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}