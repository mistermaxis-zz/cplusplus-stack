#pragma once
#include <iostream>

class Stack {
private:
	static const unsigned short capacity = 5;
	unsigned short count = 0;
	int items[capacity]{0};
	const static unsigned short base_pointer = 0;
	unsigned short stack_pointer = 0;
	bool is_full();
	bool is_empty();
public:
	bool push(int item);
	bool pop();
	int const & peek(const int& index);
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
		
		count++;

		std::cout << item << " has been pushed onto the stack.\n\n";

		log();

		return true;
	}
	else
	{
		std::cout << "The stack is full; no more items can be pushed.\n\n";
		return false;
	}
}

bool Stack::pop()
{
	if (is_empty())
	{
		std::cout << "The stack is empty; there's nothing to pop.\n\n";
		return false;
	}
	else if (count > 0)
	{
		std::cout << items[stack_pointer] << " has been popped from the stack.\n\n";
		count--;
		log();

		if (count > 1)
		{
			stack_pointer--;
		}
	}

	return true;
}

//Zero based range from 0 - 4. Returns the value at position[index].
int const & Stack::peek(const int& index)
{
	if (index >= base_pointer && index <= stack_pointer)
	{
		return items[index];
	}
	else
	{
		std::cout << "The index selected is out of range. Please select an index that is in range (0 - 4).\n";

		return 0;
	}
}

void Stack::log()
{
	std::cout << "The stack contains: " << count;
	
	if (count == 0 || count > 1)
	{
		std::cout << " items.\n\n";
	}
	else
	{
		std::cout << " item.\n\n";
	}
	
	if (is_full())
	{
		std::cout << "The stack is full.\n\n";
	}

	if (is_empty())
	{
		std::cout << "The stack is empty.\n\n";
	}

	for (int i = 5; i >= 1; i--)
	{
		if (i <= count)
		{
			std::cout << "Slot " << i << ":	| " << items[i - 1] << " |\n";
		}
		else
		{
			std::cout << "Slot " << i << ":	| " << "empty" << " |\n";
		}
	}
	std::cout << "\n";
}