#include <iostream>
#include "QueueLL.h"

QueueLL::QueueLL() {
	this->head = nullptr;
	this->tail = nullptr;
	this->length = 0;
}

//Put into the linked list
//Append from the tail
//Remove from the head

void QueueLL::push(int val) {
	node* val_node = new node;
	val_node->val = val;
	if (this->head == nullptr) {
		this->head = val_node;
		this->tail = val_node;
	}
	else {
		this->tail->next = val_node;
		this->tail = val_node;
	}
	this->length++;
}

int QueueLL::pop() {
	if (!this->length) {
		throw std::invalid_argument("The queue is empty");
	}

	if (this->length == 1) {
		this->tail = nullptr;
	}

	int poppedValue = this->head->val;
	this->head = this->head->next;
	
	this->length--;

	return poppedValue;
}

int QueueLL::size() {
	return this->length;
}