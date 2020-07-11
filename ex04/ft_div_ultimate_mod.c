void	ft_div_ultimate_mod(int *a, int *b)
{
	int res_div;
	int res_mod;
	
	res_div= *a / *b;
	res_mod= *a % *b;
	a = &res_div;
	b = &res_mod;
}
