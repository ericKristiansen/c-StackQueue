#include "Apothecary.h"
#include "Utilities.h"
#include <iostream>
using namespace std;


//Return true if we are able to buy a potion.
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
	shelf.SetShelfLimit(passShelfLimit);
}

Apothecary::~Apothecary()
{

}

//Given a potion type, add the potionType to the order list.
bool Apothecary::OrderPotion(PotionType& passPotionType) 
{
	return potionFactory.CreateOrder(passPotionType);
}

//Remove a node from the queue, and push it to the stack.
//Return the number of potions made.
int Apothecary::MakePotions()
{
	int count = ZERO;
	bool shelfLimit = shelf.GetShelfPotionCount() < shelf.GetShelfLimit();

	if (!shelfLimit)
	{
		cout << "The shelf of potions is full.  You can't make any more"
			<< " until somebody buys some.\n";
	}
	else
	{
		while (shelfLimit && !potionFactory.IsEmptyList())
		{
			Node * topOfStack = potionFactory.DequeueNext();
			topOfStack->SetNext(nullptr);
			shelf.Push(*topOfStack);

			shelf.IncrementShelfPotionCount();
			potionFactory.DecrementOrderCount();
			count++;

			cout << "Made a " << PotionTypeString(topOfStack->GetPotionType()) << " potion.\n";

			shelfLimit = shelf.GetShelfPotionCount() < shelf.GetShelfLimit();
			if (!shelfLimit && !potionFactory.IsEmptyList())
			{
				cout << "The shelf of potions is full.  You can't make any more"
					<< " until somebody buys some.\n";
			}
		}
	}
	return count;
}