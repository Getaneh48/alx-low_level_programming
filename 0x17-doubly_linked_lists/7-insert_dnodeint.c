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
	dlistint_t *hd = *h, *new_node = NULL, *last_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (hd != NULL)
	{
		if (node_ind == idx)
		{
			new_node->next = hd;
			new_node->prev = hd->prev;
			if (hd->prev == NULL)
				*h = new_node;
			else
				hd->prev->next = new_node;
			hd->prev = new_node;
			break;
		}
		if (hd->next == NULL)
			last_node = hd;
		node_ind++;
		hd = hd->next;
	}
	if (hd == NULL && (idx - node_ind == 0))
	{
		new_node->prev = last_node;
		last_node->next = new_node;
	}
	else
		return (NULL);
	return (*h);
}
