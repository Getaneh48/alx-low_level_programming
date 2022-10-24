#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
*
* @head: head of the list.
*
* Return: the value of the deleted head node.
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int val = 0;

	if (*head == NULL)
		return (0);

	node = *head;
	val = node->n;
	node = node->next;
	free(*head);
	*head = node;
	return (val);
}
