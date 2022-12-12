#include "lists.h"

/**
* delete_dnodeint_at_index - delete a node at specific position.
* @head: head of list.
* @index: index of a node to be deleted.
* Return: 1 success -1 failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	size_t ind = 0;
	int success = -1;

	while (h != NULL)
	{
		if (ind == index)
		{
			if (h->prev == NULL)
			{
				if (h->next == NULL)
					*head = NULL;
				else
				{
					*head = h->next;
					(*head)->prev = NULL;
				}
			}
			else if (h->next == NULL)
			{
				h->prev->next = NULL;
			}
			else
			{
				h->prev->next = h->next;
				h->next->prev = h->prev;
			}
			success = 1;
			break;
		}
		h = h->next;
		ind += 1;
	}
	return (success);
}
