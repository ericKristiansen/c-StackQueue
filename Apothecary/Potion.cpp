#include "Potion.h"
#include "Utilities.h"
#include "main.h"
#include <string>


Potion::Potion()
{
	potionCount = ONE;
	potionType = UNKNOWN;
}

Potion::~Potion()
{

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

int Potion::GetPotionCount()
{
	return potionCount;
}



int Potion::SetPotionType(PotionType& passPotionType)
{
	this->potionType = passPotionType;
	return ZERO;
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

//Return -1 if we cannot decrement.
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



//Provide a basic assignment operation.
Potion& Potion::operator=(Potion& passPotion)
{
	if (this != &passPotion)
	{
		this->potionType = passPotion.GetType();
		this->potionCount = passPotion.GetPotionCount();
	}
	return *this;
}



//Provide a basic "tostring" functionality.
ostream& operator<<(ostream& os, Potion& passPotion)
{
	os << "Potion of " << PotionTypeString(passPotion.GetType()) << endl;
	return os;
}