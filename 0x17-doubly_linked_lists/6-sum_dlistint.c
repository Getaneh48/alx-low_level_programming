#include "lists.h"

/**
* sum_dlistint -  function that returns
* the sum of all the data (n) of a dlistint_t linked list.
* @head: head of the list.
* Return: the sum of the list.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	if (head == NULL)
		return (0);
	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
