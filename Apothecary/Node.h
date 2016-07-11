
#pragma once
#include "Potion.h"

#ifndef __NODE_H_INCLUDED__   // if not included
#define __NODE_H_INCLUDED__ 

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
	Node & operator=(Node & passNode);
	int IncrementPotion();
	int DecrementPotion();
	int GetPotionCount();
	int SetNext(Node * passNode);
	PotionType & GetPotionType();

};

#endif 


