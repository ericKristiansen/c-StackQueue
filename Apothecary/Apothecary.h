#pragma once
#include "Shelf.h"
#include "Potion.h"
#include "PotionFactory.h"
#include "main.h"

#ifndef __APOTHECARY_H_INCLUDED__  
#define __APOTHECARY_H_INCLUDED__ 


class Apothecary
{
	private:
		Shelf shelf;
		PotionFactory potionFactory;

	public:
		Apothecary();
		~Apothecary();

		Apothecary(int passOrderLimit, int passCarryLimit);

		bool BuyPotion(Potion& passPotion);
		bool OrderPotion(PotionType& passPotionType);
		int MakePotions();
};

#endif