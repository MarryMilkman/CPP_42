#include "Convertor.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	Convertor con(av[1]);

	con.display();
	return(0);
}
