#include "PotionFactory.h"
#include "Utilities.h"
#include "main.h"
#include <iostream>
using namespace std;


PotionFactory::PotionFactory() 
{
	orderLimit = 50;
	orderCount = ZERO;
}

PotionFactory::~PotionFactory()
{

}



PotionFactory::PotionFactory(int& passOrderLimit) 
{
	orderLimit = passOrderLimit;
	orderCount = ZERO;
}



int PotionFactory::GetOrderCount()
{
	return this->orderCount;
}

int PotionFactory::GetOrderLimit()
{
	return this->orderLimit;
}



int PotionFactory::SetOrderLimit(int& passOrderLimit) 
{
	orderLimit = passOrderLimit;
	return ZERO;
}



bool PotionFactory::CreateOrder(PotionType& passPotionType)
{
	bool result = false;

	if (orderCount < orderLimit)
	{
		Potion * newPotionOrder = new Potion(passPotionType);
		Node * newNode = new Node(*newPotionOrder);
		Enqueue(*newNode);
		orderCount++;
		result = true;
	}

	return result;
}



Node* PotionFactory::DequeueNext()
{
	return this->Dequeue();
}

bool PotionFactory::IsEmptyList()
{
	return this->IsEmpty();
}



int PotionFactory::PrintListOrders()
{
	this->PrintOrderList();
	return ZERO;
}

int PotionFactory::IncrementOrderCount()
{
	orderCount++;
	return ZERO;
}



//Return a -1 if we are not able to decrement.
int PotionFactory::DecrementOrderCount()
{
	int result = NEGATIVE_ONE;
	if (orderCount > ZERO)
	{
		orderCount--;
		result = ZERO;
	}
	return result;
}



