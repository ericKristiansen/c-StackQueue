#include "Potion.h"
#include "Utilities.h"
#include "main.h"
#include <string>


Potion::~Potion()
{
}

Potion::Potion()
{
	potionCount = ONE;
	potionType = UNKNOWN;
}

Potion::Potion(PotionType& passPotionType)
{
	potionType = passPotionType;
	potionCount = ONE;
}

Potion::Potion(Potion& passPotion)
{
	this->potionType = passPotion.GetType();
	this->potionCount = passPotion.GetPotionCount();
}

PotionType & Potion::GetType()
{
	return potionType;
}

Potion& Potion:: operator=(Potion& passPotion)
{
	if (this != &passPotion)
	{
		this->potionType = passPotion.GetType();
		this->potionCount = passPotion.GetPotionCount();
	}
	return *this;
}

int Potion::SetPotionType(PotionType& passPotionType)
{
	this->potionType = passPotionType;
	return ZERO;
}

int Potion::GetPotionCount()
{
	return potionCount;
}


int Potion::SetPotionCount(int& passPotionCount)
{
	potionCount = passPotionCount;
	return ZERO;
}

int Potion::IncrementPotionCount() 
{
	potionCount++;
	return ZERO;
}

int Potion::DecrementPotionCount()
{
	int result = NEGATIVE_ONE;
	if (potionCount > 0)
	{
		potionCount--;
		result = ZERO;
	}
	return result;
}

ostream& operator<<(ostream& os, Potion& passPotion)
{
	//string potionTypeName = PotionTypeString(potionType);
	os << "Potion of " << PotionTypeString(passPotion.GetType());
	return os;
}