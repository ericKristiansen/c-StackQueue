#pragma once
#include "Potion.h"
#include "LinkedList.h"

/* FIFO Structure, add to tail, take from head*/
class Queue
{

	private:
		//to be plugged in
		LinkedList orderList; //head is front, tail is back

	public:

		Queue();
		Queue(Potion& passPotion);
		~Queue();

		//add data to the rear of the queue
		int Enqueue(Potion& passPotion);
		//remove data from the front of the queue
		int Dequeue(Potion& passPotion);
		//retrieve the data from the front of the queue without modifying the queue
		int Peek(Potion&);
		//is the queue empty ?
		int IsEmpty();
		/*
		copy constructor?
		overload operators
		*/


};