#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & ref)
{
	*this = ref;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ...\n";
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine	*new_wor = new AssaultTerminator(*this);
	return (new_wor);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !\n";
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n"; 
}

void			AssaultTerminator::sit_back() const
{
}

AssaultTerminator		& AssaultTerminator::operator=(AssaultTerminator const & ref)
{
	ref.sit_back();
	return (*this);
}