#pragma once

class PotionFactory
{
	private:
		int orderLimit;

	public:
		PotionFactory();
		PotionFactory(int& passOrderLimit);
		~PotionFactory();
		int setOrderLimit(int& passOrderLimit);
		int getOrderLimit();
};
