#include "lists.h"

/**
* get_dnodeint_at_index - returns a node at the specified index.
* @head: head of the list.
* @index: index of the node to be searched.
* Return: NULL not found otherwise address of the node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head, *found_node = NULL;
	size_t n_ind = 0;

	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (n_ind == index)
		{
			found_node = node;
			break;
		}
		n_ind++;
		node = node->next;
	}

	return (found_node);
}
