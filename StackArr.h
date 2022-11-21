#pragma once
#ifndef STACK_H
#define STACK_H

#define SIZE 10

class StackArr {
private:
	int top;
	int data[SIZE];

public:
	StackArr();

	bool isEmpty();

	bool isFull();

	void push(int val);

	int pop();
};

#endif