#include <iostream>
#include "Queue.h"

int main()
{
	Queue q;
	initQueue(&q, 3);
	std::cout << isEmpty(&q) << std::endl;
	enqueue(&q, 15);
	std::cout << isEmpty(&q) << std::endl;
	enqueue(&q, 23);
	enqueue(&q, 25);
	std::cout << isFull(&q) << std::endl;
	std::cout << dequeue(&q) << std::endl;
	std::cout << isFull(&q) << std::endl;
	cleanQueue(&q);

	return 0;
}