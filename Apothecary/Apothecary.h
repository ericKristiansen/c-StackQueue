#pragma once
#include "Shelf.h"
#include "Potion.h"
#include "PotionFactory.h"
#include "main.h"

class Apothecary
{
	private:
		Shelf shelf;
		PotionFactory potionFactory;

	public:
		Apothecary();
		Apothecary(int passOrderLimit, int passCarryLimit);
		~Apothecary();
		int BuyPotion(Potion& passPotion);
		bool OrderPotion(PotionType& passPotionType);
		int MakePotions();
};