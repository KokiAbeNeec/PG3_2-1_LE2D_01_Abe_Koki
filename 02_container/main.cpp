#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node
{
	char nane[10];

	struct Node* next;
};

int main()
{
	Node* Head;
	Node* newp;

	Head = nullptr;

	newp = new Node;
	strcpy(newp->nane, "A");
	newp->next = nullptr;

	newp->next = Head;
	Head = newp;

	newp = new Node;
	strcpy(newp->nane, "B");
	newp->next = nullptr;

	newp->next = Head;
	Head = newp;

	newp = new Node;
	strcpy(newp->nane, "C");
	newp->next = nullptr;

	newp->next = Head;
	Head = newp;


}