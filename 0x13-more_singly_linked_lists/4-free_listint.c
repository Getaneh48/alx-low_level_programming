#include "lists.h"
/**
* free_listint - free allocated memory.
*
* @head: head of list.
*
*/
void free_listint(listint_t *head)
{
	listint_t *temp_node = NULL;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
