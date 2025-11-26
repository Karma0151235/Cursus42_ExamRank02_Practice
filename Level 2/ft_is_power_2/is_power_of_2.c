int	is_power_of_2(unsigned int n)
{
	unsigned int check = 1;
	while (check <= n)
	{
		if (check == n)
			return (1);
		check *= 2;
	}
	return (0);
}