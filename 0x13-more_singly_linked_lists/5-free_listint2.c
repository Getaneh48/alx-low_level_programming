#include "lists.h"

/**
* free_listint2 -  frees a listint_t list.
*
* @head: head of the list.
*
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	node = *head;
	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	*head = NULL;
}
