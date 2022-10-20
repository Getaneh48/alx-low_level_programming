#include "lists.h"

/**
* list_len - function that returns the
* number of elements in a linked list_t list.
*
* @h: list header.
*
* Return: the number of elements.
*
*/

size_t list_len(const list_t *h)
{
	size_t total_nodes = 0;

	while (h)
	{
		h = h->next;
		total_nodes++;
	}

	return (total_nodes);
}
