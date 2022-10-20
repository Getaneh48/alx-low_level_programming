#include "lists.h"

/**
* print_list - prints all nodes in the lists.
*
* @h: list header
*
* Return: the number of nodes.
*
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}

