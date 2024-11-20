#include <iostream>
#include "Utils.h"

void reverse(int* nums, unsigned int size)
{
	Stack s;
	int i;


	initStack(&s);
	for (i = 0; i < size; i++)
	{
		push(&s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(&s);
	}

	cleanStack(&s);
}

int* reverse10()
{
	const int size = 10;
	int i;
	int* nums = new int[size];

	for (i = 0; i < size; i++)
	{
		std::cout << "Enter Number: ";
		std::cin >> nums[i];
	}
	return 0;
}

int main()
{
	reverse10();

	return 0;
}