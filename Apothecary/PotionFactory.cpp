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

int PotionFactory::PrintListOrders()
{
	this->PrintOrderList();
	return ZERO;
}

PotionFactory::PotionFactory(int& passOrderLimit) 
{
	orderLimit = passOrderLimit;
	orderCount = ZERO;
}

int PotionFactory::IncrementOrderCount()
{
	orderCount++;
	return ZERO;
}

int PotionFactory::DecrementOrderCount()
{
	int result = NEGATIVE_ONE;
	if (orderCount > ZERO)
	{
		orderCount--;
		result = ZERO;
	}
	return ZERO;
}



int PotionFactory::SetOrderLimit(int & passOrderLimit) 
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

bool PotionFactory::IsEmptyList()
{
	return this->IsEmpty();
}

int PotionFactory::MakeAllOrders()
{
	int count = ZERO;

	//for each item, add to stack, remove from queue
	//iterate until queue is empty


	return count;
}

int PotionFactory::GetOrderCount()
{
	return this->orderCount;
}

int PotionFactory::GetOrderLimit() 
{ 
	return this->orderLimit; 
}

Node * PotionFactory::DequeueNext()
{
	return this->Dequeue();
}
