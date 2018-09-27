#include <iostream>
#include "Array.hpp"


int	main()
{
	Array<char>	a(2);
	int		i;

	i = -1;
	a[1] = 48;
	a[0] = 56;
	while (++i <= 10)
	{
		try
		{
			std::cout << a[i] << std::endl;
		}
		catch (char const *err)
		{
			std::cout << err << std::endl;
		}
	}
	system("leaks a.out");
}