#pragma once

#include "Potion.h"
#include "LinkedList.h"

/* Stack implementation: Pop from head; Push to head */
class Stack
{
	private:
		LinkedList shelfPotionList;

	public:
		Stack();
		~Stack();

		int Push(Node&);
		Node* Pop();

		Node* Peek();
		bool IsEmpty();

		int PrintShelfPotionList();

};