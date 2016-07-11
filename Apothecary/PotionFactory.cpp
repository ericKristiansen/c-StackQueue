#include "PotionFactory.h"
#include "Utilities.h"
#include "main.h"

#include <iostream>
using namespace std;

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
	return IsEmpty();
}

int PotionFactory::MakeAllOrders()
{
	int count = ZERO;

	//for each item, add to stack, remove from queue
	//iterate until queue is empty


	return count;
}

int PotionFactory::GetOrderLimit() 
{ 
	return orderLimit; 
}

Node * PotionFactory::DequeueNext()
{
	return Dequeue();
	orderCount--;
}
