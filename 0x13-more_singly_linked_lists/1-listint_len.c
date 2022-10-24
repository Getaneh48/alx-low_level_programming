#include "lists.h"

/**
* listint_len - returns total number of nodes.
*
* @h: head of list.
*
* Return: total of number of nodes.
*
*/

size_t listint_len(const listint_t *h)
{
	size_t total_nodes = 0;

	while (h)
	{
		total_nodes++;
		h = h->next;
	}

	return (total_nodes);
}
