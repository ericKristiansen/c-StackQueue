#include "Shelf.h"
#include "Utilities.h"


Shelf::Shelf() 
{
	shelfLimit = DEFAULT_SHELF_VALUE;
	shelfPotionCount = 0;
}

Shelf::~Shelf()
{

}



Shelf::Shelf(int& passShelfLimit) 
{
	shelfLimit = passShelfLimit;
	shelfPotionCount = ZERO;
}

Shelf::Shelf(Shelf& passShelf)
{
	CopyShelf(passShelf);
}



int& Shelf::GetShelfLimit()
{
	return shelfLimit;
}

int& Shelf::GetShelfPotionCount()
{
	return shelfPotionCount;
}



int Shelf::SetShelfLimit(int& passShelfLimit)
{
	shelfLimit = passShelfLimit;
	return ZERO;
}

int Shelf::SetShelfPotionCount(int& passShelfPotionCount)
{
	shelfPotionCount = passShelfPotionCount;
	return ZERO;
}



int Shelf::Print()
{
	PrintShelfPotionList();
	return ZERO;
}

Node* Shelf::PopOffStack()
{
	return Pop();
}

int Shelf::CopyShelf(Shelf& passShelf)
{
	shelfLimit = passShelf.GetShelfLimit();
	shelfPotionCount = passShelf.GetShelfPotionCount();
	return ZERO;
}



int Shelf::IncrementShelfPotionCount() 
{ 
	shelfPotionCount++; 
	return ZERO;
}

int Shelf::DecrementShelfPotionCount() 
{
	int result = NEGATIVE_ONE;
	if (shelfPotionCount > 0)
	{
		shelfPotionCount--;
		result = ONE;
	}
	return result;
}



Shelf& Shelf:: operator=(Shelf& passShelf)
{
	if (this != &passShelf)
	{
		CopyShelf(passShelf);
	}
	return *this;
}