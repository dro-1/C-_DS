#include <iostream>

#include "StackLL.h"

StackLL::StackLL() {
	this->head = nullptr;
	this->tail = nullptr;
	this->length = 0;
}

void StackLL::push(int val) {
	node* val_node = new node;
	val_node->val = val;
	val_node->next = nullptr;
	if (this->head == nullptr) {
		this->head = val_node;
		this->tail = val_node;
	}
	else {
		val_node->next = this->head;
		this->head = val_node;
	}
}

int StackLL::pop() {
	if (this->head == nullptr) {
		throw std::invalid_argument("The stack is empty");
	}

	node* currHead = this->head;
	this->head = currHead->next;
	return currHead->val;
}

int StackLL::size() {
	return this->length;
}