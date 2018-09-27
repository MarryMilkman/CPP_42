#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main(void)
{
	PlasmaRifle	piu;
	PowerFist	fist;
	Enemy		*warior = new Enemy(12, "DILDO");
	SuperMutant *muta = new SuperMutant();
	RadScorpion *scorp = new RadScorpion();
	Character	god("Iisus");

	god.equip(&fist);

	god.attack(warior);
	god.attack(muta);

	god.attack(muta);
	god.attack(muta);
	
	god.attack(muta);
	
	god.recoverAP();
	god.recoverAP();
		god.recoverAP();
			god.recoverAP();



	god.recoverAP();
	god.recoverAP();
		god.recoverAP();
			god.recoverAP();

	god.recoverAP();
	god.recoverAP();
		god.recoverAP();
			god.recoverAP();
				
	god.recoverAP();
	god.recoverAP();
		god.recoverAP();
			god.recoverAP();
	return (0);
}
