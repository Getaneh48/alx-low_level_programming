#include "lists.h"

/**
* insert_nodeint_at_index - add a node at the specified index.
*
* @head: head of the list.
* @idx: the index the node will be added.
* @n: the value for the new node.
*
* Return: the address of the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cur_node, *temp_node;
	unsigned int cur_index = 0, match = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	cur_node = *head;

	while (cur_node)
	{
		if (cur_index == idx - 1)
		{
			temp_node = cur_node->next;
			cur_node->next = new_node;
			new_node->next = temp_node;
			match = 1;
			break;
		}

		cur_node = cur_node->next;
		cur_index++;
	}

	if (!match)
		return (NULL);

	return (*head);
}
