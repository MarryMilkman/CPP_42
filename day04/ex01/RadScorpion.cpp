#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Red Scorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}