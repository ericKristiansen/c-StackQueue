

#include "LinkedList.h"
#include "Utilities.h"


#include <iostream>
using namespace std;

LinkedList::LinkedList() 
{
	head = tail = nullptr;
}

LinkedList::LinkedList(Node& passNode) 
{
	head = tail = &passNode;
}

LinkedList::LinkedList(LinkedList& passList) 
{
	/*

	//work way through list, and copy nodes
	Node * tempNode = nullptr;
	tempNode = passList.getHead();
	while (head != nullptr)
	{
		if (head->GetNext() != nullptr)
		{
			Node * newNode = new Node(head->GetPotion());

		}
	}
	delete head;
	delete tail;
	*/
}

LinkedList::~LinkedList() 
{
	Node * tempNode = nullptr;
	tempNode = head;
	while (head != nullptr)
	{
		if (head->GetNext() != nullptr)
		{
			tempNode = head;
			head = head->GetNext();
			delete tempNode;
		}
	}
	delete head;
	delete tail;
}

LinkedList& LinkedList:: operator=(LinkedList& passList)
{
	if (this != &passList)
	{
		head = passList.getHead();
		tail = passList.getTail();
	}
	return *this;
}

int LinkedList::AppendHead(Node& passNode) 
{
	//case: empty or not
	if (this->getHead() == nullptr)
	{
		head = tail = &passNode;
	}
	else
	{
		passNode.SetNext(head);
		head = &passNode;
	}
	
	return ZERO;
}

//remove the head node reference from the list
Node * LinkedList::RemoveHead()
{
	Node * result = new Node();// head;
	result = head;
	head = head->GetNext();
	if (head == nullptr)
	{
		head = tail = nullptr;
	}
	return result;
}

int LinkedList::AppendTail(Node& passNode)
{
	//case: empty list
	if (head == tail && tail == nullptr) 
	{
		head = tail = &passNode;
	}
	else
	{
		//not empty: 
		tail->SetNext(&passNode);
		tail = &passNode;
	}

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

int LinkedList::searchForDuplicateItem(Potion& passPotion)
{
	//search based on Potion
	return ZERO;
}

int LinkedList::PrintList() 
{
	//iterate through nodes
	//print value
	//string listPotions = NULL;
	Node * temp = head;

	while (temp != nullptr)
	{
		cout << "\n*****************************\n";
		cout << PotionTypeString(temp->GetPotionType()) << endl;
		temp = temp->GetNext();
		cout << "\n*****************************\n";
	}


	return ZERO;
}



