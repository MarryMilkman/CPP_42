#ifndef  POWER_FIST_HPP
#define POWER_FIST_HPP value

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	~PowerFist();

	virtual void	attack() const;
};	

#endif