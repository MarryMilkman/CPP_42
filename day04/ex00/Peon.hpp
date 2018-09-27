#ifndef PEON_HPP
# define PEON_HPP value

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string name);
	~Peon();

	void		getPolymorphed() const;
};

std::ostream	& operator<<(std::ostream & o, Peon const & i);


#endif