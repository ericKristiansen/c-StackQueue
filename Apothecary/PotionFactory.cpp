#include "PotionFactory.h"
#include "Utilities.h"

PotionFactory::PotionFactory() 
{

}

PotionFactory::PotionFactory(int& passOrderLimit) 
{
	orderLimit = passOrderLimit;
}

PotionFactory::~PotionFactory() {}

int PotionFactory::setOrderLimit(int & passOrderLimit) 
{
	orderLimit = passOrderLimit;
	return ZERO;
}

int PotionFactory::getOrderLimit() 
{ 
	return orderLimit; 
	return ZERO;
}