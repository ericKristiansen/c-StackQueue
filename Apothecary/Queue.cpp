#include "Utilities.h"
#include "Queue.h"

Queue::Queue() 
{

}

Queue::Queue(Potion& passPotion)
{
	orderList.AppendTail(passPotion);
}

Queue::~Queue()
{

}

//add data to the rear of the queue
int Queue::Enqueue(Potion&)
{
	return ZERO;
}

//remove data from the front of the queue
int Queue::Dequeue(Potion&)
{
	return ZERO;
}

//retrieve the data from the front of the queue without modifying the queue
int Queue::Peek(Potion&)
{
	return ZERO;
}

//is the queue empty ?
int IsEmpty()
{
	return ZERO;
}