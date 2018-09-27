#ifndef  ENEMY_HPP
#define ENEMY_HPP

#include "iostream"

class Enemy
{
protected:
	const std::string	_type;
	int					_hp;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	~Enemy();

	std::string			getType() const;
	int 				getHP() const;
	virtual void		takeDamage(int damage);
};

#endif	