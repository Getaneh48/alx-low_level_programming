#include "lists.h"
/**
* free_dlistint - free memory used by the doublee
* linked list.
* @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
