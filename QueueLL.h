#pragma once
#ifndef QUEUE_LL_H
#define QUEUE_LL_H

#include "Node.h"

class QueueLL {
private:
	node* head;
	node* tail;
	int length;
public:
	QueueLL();
	void push(int val);
	int pop();
	int size();

};


#endif