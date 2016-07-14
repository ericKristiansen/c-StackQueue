#pragma once
#include "Node.h"

#ifndef __LINKEDLIST_H_INCLUDED__  
#define __LINKEDLIST_H_INCLUDED__ 

/*
 * This is a basic linked list class to be implemented in the
 * program's data structures.
*/
class LinkedList
{
	private:
		Node* head;
		Node* tail;

	public:
		LinkedList();
		~LinkedList();

		LinkedList(Node& passNode);
		LinkedList(LinkedList& passList);

		Node* GetHead();
		Node* GetTail();

		Node* RemoveHead();

		int AppendTail(Node& passNode);
		int AppendHead(Node& passNode);

		int PrintList();
		int CopyList(LinkedList& passList);

		LinkedList & operator=(LinkedList& passList);

};

#endif 