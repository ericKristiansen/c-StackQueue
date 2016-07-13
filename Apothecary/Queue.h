#pragma once
#include "Potion.h"
#include "LinkedList.h"

#ifndef __QUEUE_H_INCLUDED__ 
#define __QUEUE_H_INCLUDED__ 

/* 
 * Queue Implementation: 
 * -  Enqueue to tail
 * -  Dequeue from head 
 */
class Queue
{
	private:
		LinkedList orderList;

	public:
		Queue();
		~Queue();

		Queue(Node& passPassNode);

		int Enqueue(Node& passNode);
		Node* Dequeue();

		Node* Peek();
		bool IsEmpty();

		int PrintOrderList();

};

#endif