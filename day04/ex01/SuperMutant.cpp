#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Ghaaah\n";
}

void			SuperMutant::takeDamege(int damage)
{
	if (damage >= 3)
	{
		if (this->_hp <= 3)
		{
			this->_hp = 0;
			return ;
		}
		this->_hp -= 3;
		return ;
	}
	this->_hp -= damage;
}