#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const & ref)
{
	*this = ref;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine	*new_wor = new TacticalMarine(*this);
	return (new_wor);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !\n";
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *\n";
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *\n"; 
}

void			TacticalMarine::sit_back() const
{
}

TacticalMarine		& TacticalMarine::operator=(TacticalMarine const & ref)
{
	ref.sit_back();
	return (*this);
}