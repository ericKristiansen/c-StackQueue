#pragma once

#include "main.h"
#include "Queue.h"

class PotionFactory : Queue
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
		int MakeAllOrders();
		bool IsEmptyList();
		Node* DequeueNext();
		bool CreateOrder(PotionType& passPotionType);
};
