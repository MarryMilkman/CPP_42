#ifndef  VICTIM_HPP
# define VICTIM_HPP


# include <iostream>

class Victim
{
public:
	Victim();
	Victim(std::string name);
	~Victim();

	std::string		getName() const;
	virtual void	getPolymorphed() const;

protected:
	const std::string	_name;
};

std::ostream	& operator<<(std::ostream & o, Victim const & i);


#endif