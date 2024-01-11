#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint -  a function that adds a new node
* at the beginning of a dlistint_t list
* @head: dlistint_t
* @n: int
* Return: address of a new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/** Allocate memory for the new node*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	/* Set the new node as the head of the list*/
	*head = new_node;

	return (new_node);
}
