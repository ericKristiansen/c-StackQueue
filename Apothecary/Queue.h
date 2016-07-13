#pragma once
#include "Potion.h"
#include "LinkedList.h"

/* FIFO Structure: Enqueue to tail; Dequeue from head */
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