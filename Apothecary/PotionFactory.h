#pragma once

#include "main.h"
#include "Queue.h"

class PotionFactory : public Queue
{
	private:
		int orderLimit;
		int orderCount;

	public:
		PotionFactory();
		PotionFactory(int& passOrderLimit);
		~PotionFactory();
		int SetOrderLimit(int& passOrderLimit);
		int GetOrderLimit();
		int CreateOrder(PotionType& passPotionType);
};
