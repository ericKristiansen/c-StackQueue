#include "Utilities.h"
#include "Stack.h"


Stack::Stack() 
{

}

Stack::~Stack() 
{

}



//Push data to the top of the stack.
int Stack::Push(Node& passNode) 
{
	shelfPotionList.AppendHead(passNode);
	return ZERO;
}

//Remove data from the top of the stack.
Node* Stack::Pop() 
{
	return shelfPotionList.RemoveHead();
}



//Peek at the next data item without modifying it.
Node* Stack::Peek() 
{
	return shelfPotionList.GetHead();
}

//Return whether the stack is empty or not
bool Stack::IsEmpty() 
{
	return shelfPotionList.GetHead() == nullptr;
}



int Stack::PrintShelfPotionList()
{
	shelfPotionList.PrintList();
	return ZERO;
}