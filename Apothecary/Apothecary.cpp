#include "Apothecary.h"
#include "Utilities.h"


#include <iostream>
using namespace std;


//if success, return 1
int Apothecary::BuyPotion(Potion& passPotion)
{
	return 0;
}

Apothecary::Apothecary()
{

}

Apothecary::Apothecary(int passOrderLimit, int passShelfLimit)
{
	potionFactory.SetOrderLimit(passOrderLimit);
}

Apothecary::~Apothecary()
{

}

/* given a potion type, add potionType to list*/
bool Apothecary::OrderPotion(PotionType& passPotionType) 
{
	return potionFactory.CreateOrder(passPotionType);
}

int Apothecary::MakePotions()
{
	//Remove item from the queue, and pass to the stack
	int count = ZERO;
	while (shelf.GetShelfPotionCount() < shelf.GetShelfLimit() &&
		!potionFactory.IsEmptyList())
	{
		//create stack pointers for each node in queue
		//get rid of queue
		Node * topOfStack = potionFactory.DequeueNext();
		topOfStack->SetNext(nullptr);
		shelf.AppendHead(*topOfStack);
		shelf.IncrementShelfPotionCount();

		//potionFactory.MakeAllOrders();
		count++;
		
	} 
	PrintOrderList();
	PrintPotionList();

	return count;
}