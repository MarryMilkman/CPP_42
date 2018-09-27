#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	std::cout << "Constructor PowerFirst\n";
}

PowerFist::~PowerFist()
{
	std::cout << "Destructor PowerFirst\n";
}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}