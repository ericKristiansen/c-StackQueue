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
		int GetOrderCount();
		int MakeAllOrders();
		bool IsEmptyList();
		Node* DequeueNext();
		bool CreateOrder(PotionType& passPotionType);
		int PrintListOrders();
		int DecrementOrderCount();
		int IncrementOrderCount();
};
