#include "Peon.hpp"

Peon::Peon() : Victim("Zog")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

void		Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream	& operator<<(std::ostream & o, Peon const & i)
{
	o << "I'm ANGRY " << i.getName() << " and I like otters\n";
	return (o);
}