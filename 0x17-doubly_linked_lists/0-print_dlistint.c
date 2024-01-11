#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - a function that prints all the
* elements of a dlistint_t list
* @h: dlistint_t
* Return:: size_t
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
