#pragma once
#include <iostream>

class Stack {
private:
	static const unsigned short capacity = 5;
	unsigned short count = 0;
	int items[capacity];
	int* stack_pointer = items;
	bool is_full();
	bool is_empty();
public:
	bool push(int item);
	bool pop();
	void log();
};