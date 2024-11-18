#include <iostream>
#include "Stack.h"

int main(void)
{
	Stack s;
	initStack(&s);
	push(&s, 15);
	push(&s, 23);
	push(&s, 125);
	std::cout << pop(&s) << std::endl;
	std::cout << pop(&s) << std::endl;
	std::cout << pop(&s) << std::endl;
	cleanStack(&s);
}