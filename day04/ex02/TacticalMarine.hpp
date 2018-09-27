#ifndef SPACE_MARINE_HPP
# define SPACE_MARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & ref);
	~TacticalMarine();

	virtual	ISpaceMarine	*clone() const;
	virtual	void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
	void					sit_back() const;

	TacticalMarine	& operator=(TacticalMarine const & ref);	
};

#endif