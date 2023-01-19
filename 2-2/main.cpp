#include <stdio.h>
#include <stdlib.h>


typedef struct cell
{
	int val;
	struct cell* next;
}CELL;

void create(CELL* list, int val);

void index(CELL* list);

int main() 
{
	int val;

	CELL head;
	head.next = nullptr;

	while (true)
	{
		printf("D‚«‚È”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &val);

		create(&head, val);

		index(&head);
	}

	return 0;
}

void create(CELL* list, int val) {
	CELL* newlist;
	newlist = (CELL*)malloc(sizeof(CELL));

	newlist->val = val;
	newlist->next = nullptr;

	while (list->next != nullptr)
	{
		list = list->next;
	}

	list->next = newlist;
}

void index(CELL* list) {
	printf("[");
	while (list->next != nullptr)
	{
		list = list->next;
		printf("%d,", list->val);
	}
	printf("]\n");
}