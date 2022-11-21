#pragma once
#ifndef QUEUE_ARR_H
#define QUEUE_ARR_H

#define SIZE 10

class QueueArr {
private:
	int data[SIZE];
	int size;
public:
	QueueArr();
	bool isEmpty();
	bool isFull();
	void push(int val);
	int pop();
};


#endif