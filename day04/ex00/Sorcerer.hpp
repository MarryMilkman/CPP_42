#ifndef  SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	~Sorcerer();

//	Sorcerer	& operator=(Sorcerer const &rhs);

	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const & vict) const;
	void		polymorph(Peon const & peon) const;

private:
	const std::string	_name;
	const std::string	_title;
};

std::ostream	& operator<<(std::ostream & o, Sorcerer const & i);

#endif