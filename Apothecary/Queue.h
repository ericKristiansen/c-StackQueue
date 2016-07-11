#pragma once
#include "Potion.h"
#include "LinkedList.h"

/* FIFO Structure, add to tail, take from head*/
class Queue
{
	private:
		//to be plugged in
		LinkedList orderList;

	public:

		Queue();
		Queue(Node& passPassNode);
		~Queue();

		//add data to the rear of the queue
		int Enqueue(Node& passNode);
		//remove data from the front of the queue
		Node* Dequeue();
		//retrieve the data from the front of the queue without modifying the queue
		Node* Peek();
		//is the queue empty ?
		bool IsEmpty();
		int PrintList();
		/*
		copy constructor?
		overload operators
		*/


};