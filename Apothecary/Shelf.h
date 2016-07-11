#pragma once
#include "Stack.h"

class Shelf : public Stack
{
	private:
		int shelfLimit;

	public:
		Shelf();
		Shelf(int passShelfLimit);
		~Shelf();
		Shelf(Shelf& passShelf);
		Shelf & operator=(Shelf& passShelf);
		int setShelfLimit(int &passShelfLimit);
		int &getShelfLimit();

};