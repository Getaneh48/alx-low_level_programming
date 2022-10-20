#include "lists.h"

/**
* free_list - free memory.s
*
* @head: head of a list.
*
*/

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
