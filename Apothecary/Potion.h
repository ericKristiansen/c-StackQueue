#pragma once
#include <string>
#include "main.h"
using namespace std;

#ifndef __POTION_H_INCLUDED__   // if not included
#define __POTION_H_INCLUDED__ 

/*
 * This class is intended to serve as the basic data type of our
 * lists that make up our data structures.
 * In context of the program, A "Potion" has a defined type taken from "main.h",
 * and a potionCount, which may or maynot be implemented in this solution.
*/
class Potion
{
	private:
		PotionType potionType;
		int potionCount;

	public:

		Potion();
		~Potion();

		Potion(PotionType& passPotionType);
		Potion(Potion& passPotion);

		PotionType& GetType();
		int GetPotionCount();

		int SetPotionType(PotionType& passPotionType);
		int SetPotionCount(int& passPotionCount);

		int IncrementPotionCount();
		int DecrementPotionCount();

		Potion& operator=(Potion& passPotion);

		//Provide a basic "ToString" functionality.
		//Example: "Potion of Speed"
		friend ostream& operator<<(ostream& os, Potion& passPotion);
};

#endif