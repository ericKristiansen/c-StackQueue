#pragma once

#include "Node.h"

#ifndef __LINKEDLIST_H_INCLUDED__   // if not included
#define __LINKEDLIST_H_INCLUDED__ 

class LinkedList
{

	private:
		Node* head;
		Node* tail;

	public:
		LinkedList();
		LinkedList(Node& passNode);
		LinkedList(LinkedList& passList);
		~LinkedList();
		LinkedList & operator=(LinkedList& passList);
		int AppendTail(Node& passPotion);
		int AppendHead(Node& passPotion);
		//int RemovePotion(PotionType& passType);
		Node* getHead();
		Node* getTail();
		Node* RemoveHead();
		int PrintList();
		int searchForDuplicateItem(Potion& passItem);
		//int GetTotalPotions();
};

#endif 