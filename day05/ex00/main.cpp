#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "test 0: \n";
		Bureaucrat bur("Valerka", 1232);
		std::cout << "test 0: \n" << bur << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
/////////////////
	try
	{
		Bureaucrat bur("Valerka", 12);
		std::cout << "test 1: \n" << bur << std::endl;
		bur.decGrade();
		std::cout << bur << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
//////////////////
	try
	{
		Bureaucrat bur("Valerka", 150);
		std::cout << "test 2: \n" << bur << std::endl;
		bur.decGrade();
		std::cout << bur << std::endl;
		bur.incGrade();
		std::cout << bur << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
/////////////////
	try
	{
		Bureaucrat bur("Valerka", 1);
		std::cout << "test 3: \n" << bur << std::endl;
		bur.incGrade();
		std::cout << bur << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
