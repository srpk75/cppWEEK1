#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
	int val;
	Node* next;
}Node;

void init(Node* n); //fill empty values
Node* extend(Node* head, Node* newHead); //add new node as head return new address
Node* chop(Node* head); //remove head and return new address
void feed(Node* n, int val); //put di numba in di node

#endif // LINKEDLIST_H