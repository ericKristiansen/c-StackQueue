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
		~PotionFactory();

		PotionFactory(int& passOrderLimit);

		int GetOrderLimit();
		int GetOrderCount();

		int SetOrderLimit(int& passOrderLimit);

		int MakeAllOrders();
		bool CreateOrder(PotionType& passPotionType);

		Node* DequeueNext();
		bool IsEmptyList();

		int PrintListOrders();

		int IncrementOrderCount();
		int DecrementOrderCount();
};
