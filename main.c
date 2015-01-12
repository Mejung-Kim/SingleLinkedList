#include "LinkedList.h"
#include <stdio.h>

typedef struct node node;

int main(void){
	node * head = NULL, * tail = NULL;

	node sample[10] = { 0 };

	for (int i = 0; i < sizeof(sample) / sizeof(node); i++)
	{
		sample[i].e = i;
		addNode(sample[i], &head, &tail);
	}
	
	// result of addNode
	printf("addNode Result : ");
	PrintList(head);


	// remove 4
	removeNode(4, &head, &tail);

	// result of removeNode 
	printf("removeNode(4) Result : ");
	PrintList(head);	

	getchar();
}