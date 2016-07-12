#pragma once

#include "Potion.h"
#include "LinkedList.h"

/* Stack implementation
as a linked list, head is top, stack pushes to */

class Stack
{
	private:
		//to be plugged in
		LinkedList shelfPotionList;

	public:

		Stack();

		~Stack();

		//add data to the top of the stack
		int Push(Node&);

		//remove data from the top of the stack
		Node* Pop();

		//retrieve the data at the top of the stack without modifying the stack
		int Peek(Potion&)const;

		//is the stack empty?
		int IsEmpty()const;

		int PrintShelfPotionList();

		/*
		copy constructor?
		overload operators
		*/

};