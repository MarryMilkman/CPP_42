#include "Victim.hpp"

Victim::Victim() : _name("Pidor")
{
	std::cout << "Some random victim called " << this->_name << " is borne" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Now died ENEMY: " << this->_name << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " is borne" << std::endl;
}

std::string	Victim::getName() const
{
	return (this->_name);
}

void		Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream	& operator<<(std::ostream & o, Victim const & i)
{
	o << "I'm ANGRY " << i.getName() << " and I like otters\n";
	return (o);
}