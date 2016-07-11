#include "Node.h"
#include "Utilities.h"

Node::Node() 
{
	nextNode = nullptr;
}
Node::~Node() {}

Node::Node(Node & passNode) 
{
	nodePotion = passNode.GetPotion();
	nextNode = passNode.GetNext();
}

Node::Node(Potion & passPotion) 
{
	nodePotion = passPotion;
}

Node::Node(Potion & passPotion, Node * passNext) 
{
	nodePotion = passPotion;
	nextNode = passNext;
}

Potion & Node::GetPotion() 
{
	return nodePotion;
}

Node * Node::GetNext() 
{
	return nextNode;
}

Node & Node::operator=(Node & passNode) 
{
	if (this != & passNode)
	{
		nextNode = passNode.GetNext();
		nodePotion = passNode.GetPotion();
	}
	return * this;
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

int Node::GetPotionCount() 
{
	nodePotion.GetPotionCount();
	return ZERO;
}

int Node::SetNext(Node * passNode)
{
	nextNode = passNode;
	return ZERO;
}

PotionType & Node::GetPotionType()
{
	return nodePotion.GetType();
}
