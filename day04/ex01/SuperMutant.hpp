#ifndef SUPER_MUTANT_HPP
#define SUPER_MUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	~SuperMutant();

	void	takeDamege(int damage);
};
#endif