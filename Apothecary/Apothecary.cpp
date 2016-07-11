#include "Apothecary.h"
#include "Utilities.h"

//if success, return 1
int Apothecary::BuyPotion(Potion& passPotion)
{
	return ZERO;
}

Apothecary::Apothecary()
{

}

Apothecary::Apothecary(int passOrderLimit, int passShelfLimit)
{
	shelf.setShelfLimit(passShelfLimit);
	potionFactory.setOrderLimit(passOrderLimit);
}

Apothecary::~Apothecary()
{

}

bool Apothecary::OrderPotion(PotionType& passPotionType) 
{
	return true;
}

int Apothecary::MakePotions()
{
	return ZERO;
}