#include "Enemy.hpp"

Enemy::Enemy() : _type("pige"), _hp(10)
{
}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp)
{
}

Enemy::~Enemy()
{
	std::cout << "Monster " << this->_type << " is died\n";
}

std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

void			Enemy::takeDamage(int damage)
{
	if (damage >= this->_hp)
	{
		this->_hp = 0;
		return ;
	}
	this->_hp -= damage;
}