#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct node node;

int addNode(node object, node ** head, node ** tail)
{
	
	node * p_object = (node *)calloc(1, sizeof(node));
	*p_object = object;

	// empty 
	if (*tail == NULL){
		*head = p_object;
		*tail = p_object;
	}

	// not empty
	else{
		(*tail)->next = p_object;
		*tail = p_object;
	}

	return 1;
}

void removeNode(int target, node ** head, node ** tail)
{
	node * cur = *head;
	node * prev = *head;

	while (cur != NULL)
	{
		
		// 검색 성공
		if (cur->e == target)
		{
			if (cur == *head)
				*head = cur->next;
			
			else
				prev->next = cur->next;

			free(cur);
			
			break;
		}

		// 계속 탐색
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}

}

int PrintList(node * head){
	node * cur = head;

	while (cur != NULL){
		printf("%d ", cur->e);
		cur = cur->next;
	}
	printf("\n");
	return 1;
}