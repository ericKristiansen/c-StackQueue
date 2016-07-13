#pragma once
#include "Stack.h"

#ifndef __SHELF_H_INCLUDED__ 
#define __SHELF_H_INCLUDED__ 

/*
 * This Class is intended to simulate a shelf of potions for our
 * apothecary. It has a count of current potions (shelfPotionCount), 
 * and a capacity limit (shelfLimit).
*/
class Shelf : public Stack
{
	private:
		int shelfLimit;
		int shelfPotionCount;

	public:
		Shelf();
		~Shelf();

		Shelf(int passShelfLimit);
		Shelf(Shelf& passShelf);

		int& GetShelfLimit();
		int& GetShelfPotionCount();

		int SetShelfLimit(int &passShelfLimit);
		int SetShelfPotionCount(int &passShelfLimit);
		
		int Print();
		Node* PopOffStack();
		int CopyShelf(Shelf& passShelf);

		int IncrementShelfPotionCount();
		int DecrementShelfPotionCount();

		Shelf & operator=(Shelf& passShelf);
};

#endif