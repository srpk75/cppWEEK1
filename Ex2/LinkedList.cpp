#include <iostream>
#include "LinkedList.h"

void init(Node* n)
{
	n->val = -1;
	n->next = NULL;
}

Node* extend(Node* head, Node* newHead)
{
	newHead->next = head;
	return newHead;
}

Node* chop(Node* head)
{
	Node* returnAddress = head->next;
	delete(head);
	return returnAddress;
}

void feed(Node* n, int val)
{
	n->val = val;
}