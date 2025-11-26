unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;
	if (a > b)
		lcm = a;
	else
		lcm = b;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if ((lcm % a == 0) && (lcm % b == 0))
			return (lcm);
		lcm++;
	}
}