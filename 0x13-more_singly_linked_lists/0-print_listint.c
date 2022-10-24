#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
*
* @h: list header.
*
* Return: total number of nodes.
*
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
