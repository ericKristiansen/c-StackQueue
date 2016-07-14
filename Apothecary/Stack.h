#pragma once
#include "Potion.h"
#include "LinkedList.h"

#ifndef __STACK_H_INCLUDED__ 
#define __STACK_H_INCLUDED__ 

/* 
 * Stack implementation: 
 * -  Pop from head
 * -  Push to head 
 */
class Stack
{
	private:
		LinkedList shelfPotionList;

	public:
		Stack();
		~Stack();

		int Push(Node& passNode);
		Node* Pop();

		Node* Peek();
		bool IsEmpty();

		int PrintShelfPotionList();

};

#endif