#include "Shelf.h"
#include "Utilities.h"

Shelf::Shelf() 
{
	shelfLimit = DEFAULT_SHELF_VALUE;
	shelfPotionCount = 0;
}

Shelf::Shelf(int passShelfLimit) 
{
	shelfLimit = passShelfLimit;
	shelfPotionCount = 0;
}

Shelf::~Shelf() 
{

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

Shelf::Shelf(Shelf& passShelf)
{
	shelfLimit = passShelf.GetShelfLimit();
	shelfPotionCount = passShelf.GetShelfPotionCount();
	//orderList = passShelf.GetShelfPotionList();
}

Shelf& Shelf:: operator=(Shelf& passShelf)
{
	if (this != &passShelf)
	{

		//implement this guy
	}
	return *this;
}

int Shelf::SetShelfLimit(int& passShelfLimit) 
{
	shelfLimit = passShelfLimit;
	return ZERO;
}

int& Shelf::GetShelfLimit() 
{
	return shelfLimit;
}

int Shelf::SetShelfPotionCount(int& passShelfPotionCount)
{
	shelfPotionCount = passShelfPotionCount;
	return ZERO;
}

int& Shelf::GetShelfPotionCount()
{
	return shelfPotionCount;
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