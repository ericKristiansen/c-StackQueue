

#include "LinkedList.h"
#include "Utilities.h"


LinkedList::LinkedList() {}

LinkedList::LinkedList(Node passNode) {}

LinkedList::LinkedList(LinkedList& passList) {}

LinkedList::~LinkedList() {}

LinkedList& LinkedList:: operator=(LinkedList& passList)
{
	if (this != &passList)
	{
		head = passList.getHead();
		tail = passList.getTail();
	}
	return *this;
}

int LinkedList::AppendHead(Potion& passPotion) 
{
	//create Node
	//setNodeIntoPostion
	return ZERO;
}

int LinkedList::RemovePotion(PotionType& passType)
{
	return ZERO;
}

int LinkedList::AppendTail(Potion& passPotion)
{
	//create Node
	//setNodeIntoPostion
	return ZERO;
}

Node* LinkedList::getHead()
{
	return head;
}

Node* LinkedList::getTail()
{
	return tail;
}

int LinkedList::getPotionListCount() 
{
	return ZERO;
}

int LinkedList::searchForDuplicateItem(Potion& passPotion)
{
	//search based on Potion
	return ZERO;
}

int LinkedList::PrintList() 
{
	//iterate through nodes
	//print value
	return ZERO;
}

int LinkedList::GetTotalPotions() 
{
	//iterate through loop
	//get total
	return ZERO;
}



