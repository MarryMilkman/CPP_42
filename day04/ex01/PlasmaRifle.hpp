#ifndef  PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP value

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	~PlasmaRifle();

	virtual void	attack() const;
};	

#endif