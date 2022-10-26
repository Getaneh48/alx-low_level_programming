#include "lists.h"

/**
* reverse_listint - reverse the order or a linked list.
*
* @head: head of the list.
*
* Return: the address of the head.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *cur = NULL;

	cur = *head;
	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
	return (*head);
}
