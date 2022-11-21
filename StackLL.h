#pragma once
#ifndef STACKLL_H
#define STACKLL_H

#include "Node.h"

class StackLL {
private:
	node* head;
	node* tail;
	int length;
public:
	StackLL();
	int pop();
	void push(int val);
	int size();
};

#endif
