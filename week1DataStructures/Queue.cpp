#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	int i;
	q->memory = new int(size);
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
	if (!isFull(q))
	{
		q->memory[q->lastInQueue] = newValue;
		q->lastInQueue++;
	}
}

int dequeue(Queue* q)
{
	int val = -1;
	if (!isEmpty(q))
	{
		val = q->memory[q->lastInQueue - 1];
		q->lastInQueue--;
	}
	return val;
}

bool isEmpty(Queue* q)
{
	return q->lastInQueue == 0;
}

bool isFull(Queue* q)
{
	return q->lastInQueue == q->size;
}