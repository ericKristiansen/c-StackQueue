#include "Apothecary.h"
#include "Utilities.h"


#include <iostream>
using namespace std;


//if success, return 1
bool Apothecary::BuyPotion(Potion& passPotion)
{
	bool result = false;
	if (shelf.GetShelfPotionCount() > 0)
	{
		//pop off stack
		Node * temp = shelf.Pop();
		//decrement
		shelf.DecrementShelfPotionCount();
		passPotion = temp->GetPotion();
		result = true;
	}

	return result;
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
		shelf.Push(*topOfStack);

		shelf.IncrementShelfPotionCount();
		potionFactory.DecrementOrderCount();
		
		cout << "Made a " << PotionTypeString(topOfStack->GetPotionType()) << " potion.\n";

		count++;
	} 

	return count;
}