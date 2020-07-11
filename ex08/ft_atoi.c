int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res= res * 10 + (str[i] - '0');
		++i;
	}
	return res;
}
