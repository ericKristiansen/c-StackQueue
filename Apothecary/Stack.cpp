#include "Utilities.h"
#include "Stack.h"

Stack::Stack() 
{

}

Stack::~Stack() 
{

}

int Stack::Push(const Potion&) 
{
	return ZERO;
}

int Stack::PrintShelfPotionList()
{
	shelfPotionList.PrintList();
}

//remove data from the top of the stack
int Stack::Pop(Potion&) 
{
	return ZERO;
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