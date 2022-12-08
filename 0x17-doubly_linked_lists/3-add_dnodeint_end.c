#include "lists.h"

/**
* add_dnodeint_end - add a new node at the end of the list.
* @head: head of the doublee linked list.
* @n: integer value of the new node
* Return: address of the head.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (h == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (h != NULL)
	{
		if (h->next == NULL)
		{
			new_node->prev = h;
			h->next = new_node;
			break;
		}
		h = h->next;
	}
	return (*head);
}
