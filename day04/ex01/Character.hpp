#ifndef CHERACTER_HPP
# define CHERACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon	*weap;

public:
	Character(std::string const & name);
	~Character();

	void		recoverAP();
	void		equip(AWeapon *weap);
	void		attack(Enemy *enemy);	
	std::string	getName() const;
};

#endif