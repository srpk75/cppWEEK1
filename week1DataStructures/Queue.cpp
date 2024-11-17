#include <iostream>
#include "Queue.h"

int Main(void)
{
	Queue* queue = new Queue;
}

void initQueue(Queue* q, unsigned int size)
{
	int i;
	q->memory = (int*)malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		q->memory[i] = -1;
	}
	q->size = size;
	q->lastInQueue = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->memory;
	delete(q);
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->memory[q->lastInQueue] = newValue;
	q->lastInQueue++;
}