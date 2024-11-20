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
	int* arr = new int[10];
}