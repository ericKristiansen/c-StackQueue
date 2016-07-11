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
	Potion(PotionType& passPotionType);
	~Potion();
	PotionType& GetType();
	int SetPotionCount(int& passPotionCount);
	int GetPotionCount();
	int IncrementPotionCount();
	int DecrementPotionCount();

	friend ostream& operator<<(ostream& os, Potion& passPotion);
};
