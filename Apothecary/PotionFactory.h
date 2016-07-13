#pragma once
#include "main.h"
#include "Queue.h"

#ifndef __POTION_FACTORY_H_INCLUDED__ 
#define __POTION_FACTORY_H_INCLUDED__ 

/*
 * This class is intended to do the majority of the work managing potions
 * to be created.
*/
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

		bool CreateOrder(PotionType& passPotionType);

		Node* DequeueNext();
		bool IsEmptyList();

		int IncrementOrderCount();
		int DecrementOrderCount();

		int PrintListOrders();

};

#endif
