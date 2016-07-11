#pragma once

#include <string>
#include "main.h"
using namespace std;

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

	int SetPotionCount(int& passPotionCount);
	int SetPotionType(PotionType& passPotionType);

	int IncrementPotionCount();
	int DecrementPotionCount();

	Potion& operator=(Potion& passPotion);
	friend ostream& operator<<(ostream& os, Potion& passPotion);
};
