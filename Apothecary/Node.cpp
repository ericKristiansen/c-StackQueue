#include "Node.h"
#include "Utilities.h"


Node::Node() 
{
	nextNode = nullptr;
}

Node::~Node() 
{
	
}



Node::Node(Node& passNode) 
{
	nodePotion = passNode.GetPotion();
	nextNode = passNode.GetNext();
}

Node::Node(Potion& passPotion) 
{
	nodePotion = passPotion;
}

Node::Node(Potion& passPotion, Node * passNext) 
{
	nodePotion = passPotion;
	nextNode = passNext;
}



Potion& Node::GetPotion() 
{
	return nodePotion;
}

Node* Node::GetNext() 
{
	return nextNode;
}



PotionType& Node::GetPotionType()
{
	return nodePotion.GetType();
}

int Node::GetPotionCount()
{
	return nodePotion.GetPotionCount();
}



int Node::SetNext(Node* passNode)
{
	nextNode = passNode;
	return ZERO;
}

int Node::SetPotion(PotionType& passPotionType)
{
	nodePotion.SetPotionType(passPotionType);
	return ZERO;
}



int Node::IncrementPotion() 
{
	nodePotion.IncrementPotionCount();
	return ZERO;
}

int Node::DecrementPotion() 
{
	nodePotion.DecrementPotionCount();
	return ZERO;
}



Node& Node::operator=(Node& passNode)
{
	if (this != &passNode)
	{
		nextNode = passNode.GetNext();
		nodePotion = passNode.GetPotion();
	}
	return *this;
}
