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

int Shelf::setShelfLimit(int& passShelfLimit) 
{
	shelfLimit = passShelfLimit;
	return ZERO;
}

int& Shelf::getShelfLimit() 
{
	return shelfLimit;
}