#pragma once

#include "Potion.h"


/* Stack implementation
as a linked list, head is top, stack pushes to */

class Stack
{

	private:
		//to be plugged in
		//Node* currentNode;

	public:

		Stack();

		~Stack();

		//add data to the top of the stack
		int Push(const Potion&);

		//remove data from the top of the stack
		int Pop(Potion&);

		//retrieve the data at the top of the stack without modifying the stack
		int Peek(Potion&)const;

		//is the stack empty?
		int IsEmpty()const;

		/*
		copy constructor?
		overload operators
		*/

};