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