#ifndef  AWEAPON_HPP
# define AWEAPON_HPP value

# include <iostream>



class AWeapon
{
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & dest);
	~AWeapon();

	AWeapon			& operator=(AWeapon const & orig);

	std::string		getName() const;
	int				getApcost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;

private:
	std::string		_name;
	int				_apcost;
	int				_damage;
};

#endif