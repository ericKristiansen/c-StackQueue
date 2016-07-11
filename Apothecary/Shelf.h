#pragma once
#include "Stack.h"

class Shelf : public Stack
{
	private:
		int shelfLimit;
		int shelfPotionCount;

	public:
		Shelf();
		Shelf(int passShelfLimit);
		~Shelf();
		Shelf(Shelf& passShelf);
		Shelf & operator=(Shelf& passShelf);
		int SetShelfLimit(int &passShelfLimit);
		int& GetShelfLimit();
		int SetShelfPotionCount(int &passShelfLimit);
		int& GetShelfPotionCount();

		int IncrementShelfPotionCount();
		int DecrementShelfPotionCount();
};