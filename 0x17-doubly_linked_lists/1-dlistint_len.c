#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* dlistint_len - a function that returns the number
* of elements in a linked dlistint_t list
* @h: dlistint_t
* Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
