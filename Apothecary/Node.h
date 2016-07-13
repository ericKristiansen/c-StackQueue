#pragma once
#include "Potion.h"

#ifndef __NODE_H_INCLUDED__ 
#define __NODE_H_INCLUDED__ 

/*
 * This is a simple node class to serve a node like functionality
 * in the linked lists of our program's data structures.
*/
class Node 
{
	friend class LinkedList;

	private:
		Potion nodePotion;
		Node * nextNode;

	public:
		Node();
		~Node();

		Node(Node & passNode);
		Node(Potion & passPotion);
		Node(Potion & passPotion, Node * passNext);

		Potion & GetPotion();
		Node * GetNext();

		PotionType & GetPotionType();
		int GetPotionCount();

		int SetNext(Node * passNode);

		int IncrementPotion();
		int DecrementPotion();

		Node & operator=(Node & passNode);

};

#endif 


