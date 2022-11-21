#include "StackArr.h"

StackArr::StackArr() {
	this->top = -1;
}

bool StackArr::isEmpty() {
	return this->top == -1;
}

bool StackArr::isFull() {
	return this->top == SIZE;
}

int StackArr::pop() {
	if (!this->isEmpty()) {
		return this->data[this->top--];
	}
	return -1;
}

void StackArr::push(int val) {
	if (!this->isFull()) {
		this->data[++this->top] = val;
	}
}

