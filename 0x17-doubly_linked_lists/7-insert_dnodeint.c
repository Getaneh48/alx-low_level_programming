#include "lists.h"
/**
* insert_dnodeint_at_index - insert a new node at specific position.
* @h: head of the list.
* @idx: the position to insert the new node.
* @n: integer value of the new node.
* Return: address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t node_ind = 0;
	dlistint_t *hd = *h, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (hd != NULL)
	{
		if (node_ind == idx && idx > 0)
		{
			new_node->next = hd;
			new_node->prev = hd->prev;
			hd->prev->next = new_node;
			hd->prev = new_node;
			break;
		}
		node_ind++;
		hd = hd->next;
	}
	return (*h);
}
