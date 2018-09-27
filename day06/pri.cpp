int main()
{
	double c = 12;
	int a =	static_cast<int>(c);
//			dynamic_cast<>;
	void	*b	= &c;
	int		*d	= reinterpret_cast<int *>(&c);
	int		& f	= reinterpret_cast<int &>(c);

	int	const	z = 42;

	int *g		= const_cast<int *>(&z);

	return (0);
}
