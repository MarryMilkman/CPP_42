#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "Constructor PlasmaRifle\n";
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "Destructor PlasmaRifle\n";
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}