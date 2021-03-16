#pragma once
#include <iostream>

class Stack {
private:
	static const unsigned short capacity = 5;
	unsigned short count = 0;
	int items[capacity];
	unsigned short stack_pointer = 0;
	unsigned short base_pointer = 0;
	bool is_full();
	bool is_empty();
public:
	bool push(int item);
	bool pop();
	const int& peek(const int& index);
	void log();
};

bool Stack::is_full()
{
	if (count == capacity)
		return true;
	else
		return false;
}

bool Stack::is_empty()
{
	if (count == 0)
		return true;
	else
		return false;
}

bool Stack::push(int item)
{
	if (is_full() == false)
	{
		if (is_empty() == false)
		{
			stack_pointer++;
		}
		items[stack_pointer] = item;
		return true;
	}
	else
	{
		return false;
	}
}