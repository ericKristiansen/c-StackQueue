#include "Utilities.h"
#include "Queue.h"
#include "Potion.h"

#include <iostream>
using namespace std;

Queue::Queue() 
{
}

Queue::Queue(Node& passNode)
{
	orderList.AppendTail(passNode);
}

Queue::~Queue()
{

}

//add data to the rear of the queue
int Queue::Enqueue(Node& passNode)
{
	//receive potion, add to list
	orderList.AppendTail(passNode);
	return ZERO;
}

//remove data from the front of the queue
Node* Queue::Dequeue()
{
	return orderList.RemoveHead();
}

//retrieve the data from the front of the queue without modifying the queue
Node* Queue::Peek()
{
	return orderList.getHead();
}

//is the queue empty ?
bool Queue::IsEmpty()
{
	bool result = orderList.getHead() == nullptr;
	return result;
}

int Queue::PrintOrderList()
{
	orderList.PrintList();
	return ZERO;
}