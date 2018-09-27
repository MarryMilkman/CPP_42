#include "AWeapon.hpp"

AWeapon::AWeapon() :
		_name("name"), _apcost(0), _damage(0)
{
	std::cout << "Constructor AWeapon!" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
		_name(name), _apcost(apcost), _damage(damage)
{
	std::cout << "Constructor AWeapon!" << std::endl;
}

AWeapon::AWeapon(AWeapon const & dest) :
		_name(dest.getName()), _apcost(dest.getApcost()), _damage(dest.getDamage())
{
	*this = dest;
}

AWeapon::~AWeapon()
{
	std::cout << "Destructor AWeapon!" << std::endl;
}

AWeapon		& AWeapon::operator=(AWeapon const & orig)
{
	this->_name = orig.getName();
	this->_apcost = orig.getApcost();
	this->_damage = orig.getDamage();
	return (*this);
}

std::string		AWeapon::getName() const
{
	return (this->_name);
}

int				AWeapon::getApcost() const
{
	return (this->_apcost);
}

int				AWeapon::getDamage() const
{
	return (this->_damage);
}