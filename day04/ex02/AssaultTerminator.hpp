#ifndef ASSAULT_TERMINATOR_HPP
#define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & ref);
	~AssaultTerminator();

	virtual	ISpaceMarine	*clone() const;
	virtual	void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
	void					sit_back() const;

	AssaultTerminator	& operator=(AssaultTerminator const & ref);		
};

#endif