#include <iostream>
#include "Stack.h"

void initStack(Stack* s)
{
	s->head = NULL;
	s->size = 0;
}

void cleanStack(Stack* s)
{
	Node* pDel = s->head;
	Node* pPtr = s->head;
	while (pPtr != NULL)
	{
		pDel = pPtr;
		pPtr = pPtr->next;
		delete(pDel);
	}
}

void push(Stack* s, unsigned int element)
{
	Node* n = new Node;
	feed(n, element);
	s->head = extend(s->head, n);
	s->size++;
}

int pop(Stack* s)
{
	int val = s->head->val;
	if (!isEmpty(s))
	{
		s->head = chop(s->head);
		s->size--;
	}
	else
		val = -1;

	return val;
}

bool isEmpty(Stack* s)
{
	return s->size == 0;
}