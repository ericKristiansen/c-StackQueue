#include "Shelf.h"
#include "Utilities.h"

Shelf::Shelf() 
{
	shelfLimit = DEFAULT_SHELF_VALUE;
}

Shelf::Shelf(int passShelfLimit) 
{
	shelfLimit = passShelfLimit;
}

Shelf::~Shelf() 
{

}

Shelf::Shelf(Shelf& passShelf)
{
	Shelf * newShelf = new Shelf();
}

Shelf& Shelf:: operator=(Shelf& passShelf)
{
	if (this != &passShelf)
	{

		//implement this guy
	}
	return *this;
}

int Shelf::setShelfLimit(int& passShelfLimit) 
{
	shelfLimit = passShelfLimit;
	return ZERO;
}

int& Shelf::getShelfLimit() 
{
	return shelfLimit;
}