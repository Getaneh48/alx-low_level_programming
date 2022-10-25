#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at the specified index.
*
* @head: head of the list.
* @index: the index the node will be deleted.
*
* Return: the address of the new node.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur_node, *temp_node;
	unsigned int cur_index = 0, match = 0, i = 0;

	if (*head == NULL)
		return (-1);
	cur_node = *head;
	if (index == 0)
		return (delete_first_node(head));
	while (cur_node != NULL)
	{
		if (cur_index + 1 == index)
		{
			if (cur_node->next != NULL)
			{
				temp_node = cur_node->next;
				free(cur_node);
				match = cur_index;
				break;
			}
			else
				return (delete_tail_node(head, cur_index));
		} cur_index++;
		cur_node = cur_node->next;
	}
	if (match)
	{
		cur_node = *head;
		while (cur_node)
		{
			if (i == cur_index - 1)
			{
				cur_node->next = temp_node;
				break;
			} i++;
			cur_node = cur_node->next;
		}
	}
	if (match == 0)
		return (-1);
	return (1);
}

/**
* delete_first_node - delete the first node of a list.
*
* @head: head of the list.
*
* Return: 1 on success -1 on failure.
*
*/
int delete_first_node(listint_t **head)
{
	listint_t *temp_node, *node;

	node = *head;
	temp_node = node->next;
	free(node);
	if (temp_node != NULL)
		*head = temp_node;
	else
	{
		*head = NULL;
		return (-1);
	}
	return (1);
}

/**
* delete_tail_node - delete the tail of the linked list.
*
* @head: head of the tail.
* @index: the last index of the list.
*
* Return: int.
*/

int delete_tail_node(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int cur_index = 0;

	node = *head;
	while (node)
	{
		if (cur_index == index - 1)
		{
			node->next = NULL;
			break;
		}
		cur_index++;
		node = node->next;
	}

	return (1);
}
