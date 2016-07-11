#pragma once


class Shelf
{
	private:
		int shelfLimit;

	public:
		Shelf();
		Shelf(int passShelfLimit);
		~Shelf();
		int setShelfLimit(int &passShelfLimit);
		int &getShelfLimit();
};