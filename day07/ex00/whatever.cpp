#include <iostream>

template<typename T>
T	max(T const & a, T const & b)
{
	return ((a > b) ? a : b);
}

template<typename T>
T	min(T const & a, T const & b)
{
	return ((a < b) ? a : b);
}

template<typename T>
void	swap(T & a, T & b)
{
	T buf;

	buf = a;
	a = b;
	b = buf;
}

int main()
{
	int a = 12;
	int	b = 23;
	std::string	s1 = "qst";
	std::string	s2 = "asd";

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max form " << a << " and "
		<< b << " is " << max<int>(a, b) << std::endl;
	std::cout << "min form " << a << " and "
		<< b << " is " << min<int>(a, b) << std::endl;
	std::cout << "swap\n";
	::swap<int>(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}