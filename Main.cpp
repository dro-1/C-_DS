#include <iostream>
#include "StackArr.h"
#include "StackLL.h"
#include "QueueArr.h"
#include "QueueLL.h"

int main() {

	std::cout << "Stack with Array\n";
	StackArr stack_arr;
	stack_arr.push(1);
	stack_arr.push(5);
	std::cout << stack_arr.pop() << "\n";
	stack_arr.push(3);
	stack_arr.push(9);
	std::cout << stack_arr.pop() << "\n";
	std::cout << stack_arr.pop() << "\n";
	stack_arr.push(20);
	stack_arr.push(25);
	std::cout << stack_arr.pop() << "\n\n\n";

	std::cout << "Stack with Linked List\n";
	StackLL list;
	list.push(1);
	list.push(5);
	std::cout << list.pop() << "\n";
	list.push(3);
	list.push(9);
	std::cout << list.pop() << "\n";
	std::cout << list.pop() << "\n";
	list.push(20);
	list.push(25);
	list.push(28);
	std::cout << list.pop() << "\n\n\n";

	std::cout << "Queue with Array\n";
	QueueArr queue_arr;
	queue_arr.push(1);
	queue_arr.push(5);
	std::cout << queue_arr.pop() << "\n";
	queue_arr.push(3);
	queue_arr.push(9);
	std::cout << queue_arr.pop() << "\n";
	std::cout << queue_arr.pop() << "\n";
	queue_arr.push(20);
	queue_arr.push(25);
	queue_arr.push(28);
	std::cout << queue_arr.pop() << "\n";
	std::cout << queue_arr.pop() << "\n";
	std::cout << queue_arr.pop() << "\n";
	std::cout << queue_arr.pop() << "\n\n\n";

	std::cout << "Queue with Linked List\n";
	QueueLL queue_ll;
	queue_ll.push(1);
	queue_ll.push(5);
	std::cout << queue_ll.pop() << "\n";
	queue_ll.push(3);
	queue_ll.push(9);
	queue_ll.push(25);
	queue_ll.push(215);
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	queue_ll.push(2049);
	queue_ll.push(25);
	queue_ll.push(5848);
	queue_ll.push(65);
	queue_ll.push(9023);
	queue_ll.push(5542);
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n";
	std::cout << queue_ll.pop() << "\n\n\n";

	return 0;
}