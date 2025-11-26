#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
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
	int sign = 1, i = 0, sum = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
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
		int n = ft_atoi(av[1]), i = 1;
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(n);
			ft_putstr(" = ");
			ft_putnbr(i * n);
			ft_putchar('\n');
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}