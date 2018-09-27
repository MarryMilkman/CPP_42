#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("Merlin"), _title("ahaha")
{
	std::cout << this->_name << ", " << this->_title << " is borne" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << "Now died one epic mag: " << this->_name << ", " << this->_title << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << " is borne" << std::endl;
}

void		Sorcerer::polymorph(Victim const & vict) const
{
	vict.getPolymorphed();
}

void		Sorcerer::polymorph(Peon const & peon) const
{
	peon.getPolymorphed();
}

std::string	Sorcerer::getName() const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->_title);
}
/*
Sorcerer		& operator=(Sorcerer const &rhs)
{
	this->_name = rgs.getName();
	return (*this)
}*/

std::ostream	& operator<<(std::ostream & o, Sorcerer const & i)
{
	o << "I'm " << i.getName() << ", " << i.getTitle() << ", and I like ponies\n";
	return (o);
}