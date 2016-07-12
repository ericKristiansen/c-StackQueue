#include "Utilities.h"
#include "Stack.h"

Stack::Stack() 
{

}

Stack::~Stack() 
{

}

int Stack::Push(Node& passNode) 
{
	shelfPotionList.AppendHead(passNode);
	return ZERO;
}

int Stack::PrintShelfPotionList()
{
	shelfPotionList.PrintList();
	return ZERO;
}

//remove data from the top of the stack
Node* Stack::Pop() 
{
	return shelfPotionList.RemoveHead();
}

//retrieve the data at the top of the stack without modifying the stack
int Stack::Peek(Potion&)const 
{
	return ZERO;
}

//is the stack empty?
int Stack::IsEmpty()const 
{
	return ZERO;
}