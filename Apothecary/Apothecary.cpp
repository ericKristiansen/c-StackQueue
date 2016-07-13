#include "Apothecary.h"
#include "Utilities.h"
#include <iostream>
using namespace std;


Apothecary::Apothecary()
{

}

Apothecary::~Apothecary()
{

}



Apothecary::Apothecary(int passOrderLimit, int passShelfLimit)
{
	potionFactory.SetOrderLimit(passOrderLimit);
	shelf.SetShelfLimit(passShelfLimit);
}



//Return true if we are able to buy a potion.
bool Apothecary::BuyPotion(Potion& passPotion)
{
	bool result = false;
	if (shelf.GetShelfPotionCount() > ZERO)
	{
		Node * temp = shelf.Pop();

		passPotion = temp->GetPotion();

		shelf.DecrementShelfPotionCount();
		result = true;
	}
	return result;
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