#include "LinkedList.h"
#include "Utilities.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList() 
{
	head = tail = nullptr;
}

//Walk through the linked list, and delete each node.
LinkedList::~LinkedList()
{
	Node* currentNode = head;

	while (currentNode != nullptr)
	{
		head = currentNode->GetNext();
		delete currentNode;
		currentNode = head;
	}

	tail = nullptr;

	delete head;
	delete tail;
	delete currentNode;

}

void LinkedList::clearTailHead()
{
	tail = head = nullptr;
}

//Instantiate a LinkedList class with a single node.
LinkedList::LinkedList(Node& passNode) 
{
	head = tail = &passNode;
}

//Copy a LinkedList class object.
LinkedList::LinkedList(LinkedList& passList) 
{
	CopyList(passList);
}



Node* LinkedList::GetHead()
{
	return head;
}

Node* LinkedList::GetTail()
{
	return tail;
}



//Remove, and return the head of the list.
Node* LinkedList::RemoveHead()
{
	Node* result = head;
	head = head->GetNext();
	if (head == nullptr)
	{
		head = tail = nullptr;
	}
	return result;
}



int LinkedList::AppendHead(Node& passNode) 
{
	//case: empty or not
	if (this->GetHead() == nullptr)
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

int LinkedList::AppendTail(Node& passNode)
{
	//case: empty list
	if (head == tail && tail == nullptr) 
	{
		head = tail = &passNode;
	}
	else //case: not empty
	{
		tail->SetNext(&passNode);
		tail = &passNode;
	}
	return ZERO;
}



int LinkedList::PrintList() 
{
	Node* temp = head;

	while (temp != nullptr)
	{
		cout << "\nCurrent List:\n";
		cout << PotionTypeString(temp->GetPotionType()) << endl;
		temp = temp->GetNext();
		cout << "\n\n";
	}
	return ZERO;
}

int LinkedList::CopyList(LinkedList& passList)
{
	//case: empty
	if (passList.GetHead() == nullptr)
	{
		head = tail = nullptr;
	}
	else //case: not empty
	{
		head = new Node(*passList.GetHead());
		Node* thatCurrentNode = passList.GetHead();

		Node* thisPreviousNode = head;
		Node* thisCurrentNode = head;

		while (thatCurrentNode->GetNext() != nullptr)
		{
			thatCurrentNode = thatCurrentNode->GetNext();

			Node* newNode = new Node(*thatCurrentNode);

			thisCurrentNode->SetNext(newNode);
			thisPreviousNode = thisCurrentNode;
			thisCurrentNode = thisCurrentNode->GetNext();
		}

		tail = thisPreviousNode;
	}
	return ZERO;
}



LinkedList& LinkedList::operator=(LinkedList& passList)
{
	if (this != &passList)
	{
		CopyList(passList);
	}
	return *this;
}





