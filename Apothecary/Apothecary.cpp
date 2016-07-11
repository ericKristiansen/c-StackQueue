#include "Apothecary.h"
#include "Utilities.h"

//if success, return 1
int Apothecary::BuyPotion(Potion& passPotion)
{
	return 0;
}

Apothecary::Apothecary()
{

}

Apothecary::Apothecary(int passOrderLimit, int passShelfLimit)
{
	shelf.setShelfLimit(passShelfLimit);
	potionFactory.SetOrderLimit(passOrderLimit);
}

Apothecary::~Apothecary()
{

}

/* given a potion type, add potionType to list*/
bool Apothecary::OrderPotion(PotionType& passPotionType) 
{
	potionFactory.CreateOrder(passPotionType);

	return true;
}

int Apothecary::MakePotions()
{
	return ZERO;
}