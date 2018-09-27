#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40)
{
	this->weap = 0;
}

Character::~Character()
{
}

void	Character::recoverAP()
{
	if (this->_ap >= 30)
	{
		this->_ap = 40;
		return ;
	}
	this->_ap += 10;
}

void	Character::equip(AWeapon *weap)
{
	this->weap = weap;
	return ;
}

void	Character::attack(Enemy *enemy)
{
	if (!this->weap || !enemy)
		return ;
	if (this->_ap >= this->weap->getApcost())
	{
		enemy->takeDamage(this->weap->getDamage());
		this->_ap -= this->weap->getApcost();
		this->weap->attack();
		std::cout << this->_name << " attacks " << enemy->getType()
			<< " with a " << this->weap->getName() << std::endl;
		if (enemy->getHP() < 1)
		{
			delete enemy;
			enemy = 0;
		}
	}
}

std::string	Character::getName() const
{
	return (this->_name);
}