#include "PotionFactory.h"
#include "Utilities.h"
#include "main.h"

PotionFactory::PotionFactory() 
{
	orderLimit = 50;
	orderCount = 0;
}

PotionFactory::PotionFactory(int& passOrderLimit) 
{
	orderLimit = passOrderLimit;
	orderCount = 0;
}

PotionFactory::~PotionFactory() 
{
}

int PotionFactory::SetOrderLimit(int & passOrderLimit) 
{
	orderLimit = passOrderLimit;
	return ZERO;
}

int PotionFactory::CreateOrder(PotionType& passPotionType)
{
	int result = ZERO;

	if (orderCount < orderLimit)
	{
		Potion * newPotionOrder = new Potion(passPotionType);
		Enqueue(*newPotionOrder);
		orderCount++;
		result = ONE;
	}

	return result;
}

int PotionFactory::GetOrderLimit() 
{ 
	return orderLimit; 
}
