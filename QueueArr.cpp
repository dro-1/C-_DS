#include <iostream>

#include "QueueArr.h"

QueueArr::QueueArr() {
	this->size = 0;
}

bool QueueArr::isEmpty() {
	return this->size == 0;
}

bool QueueArr::isFull() {
	return this->size == SIZE;
}

void QueueArr::push(int val) {
	if (this->isFull()) {
		throw std::invalid_argument("The queue is full");
	}
	this->data[this->size++] = val;
}

int QueueArr::pop() {
	if (this->isEmpty()) {
		throw std::invalid_argument("The queue is empty");
	}
	
	for (int i = 1; i < this->size; i++) {
		int temp = this->data[i];
		this->data[i] = this->data[i - 1];
		this->data[i - 1] = temp;
	}

	//first in queue is now at the back of the array with all other elements shifted forward
	//Reducing size by one, its value becomes the index of the last elem of the array
	return this->data[--this->size];
}