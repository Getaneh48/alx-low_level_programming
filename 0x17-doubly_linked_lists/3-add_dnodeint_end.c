#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* add_dnodeint_end - a function that adds a
* new node at the end of a dlistint_t list.
* @head: dlistint_t
* @n: int
* Return: the address of the new element or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = NULL;
	temp->next = new_node;

	return (new_node);
}
