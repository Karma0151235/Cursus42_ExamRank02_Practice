int	isvalid(int ch, int baselen)
{
	char	*lcbase = "0123456789abcdef";
	char	*ucbase = "0123456789ABCDEF";
	int		i = 0;

	while (i < baselen)
	{
		if (ch == lcbase[i] || ch == ucbase[i])
			return (1);
		i++;
	}
	return (0);
}

int	isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int sum = 0, sign = 1, i = 0;
	while (isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && isvalid(str[i], str_base));
	{
		sum *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			sum += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'z')
			sum += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			sum += str[i] - 'A' + 10;
		i++;
	}
	return (sum * sign);
}