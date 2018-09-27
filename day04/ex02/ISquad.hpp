#ifndef I_SQUAD
# define I_SQUAD

# include <iostream>

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int nbr) const = 0;
	virtual int push(ISpaceMarine *marine) = 0;
};

#endif