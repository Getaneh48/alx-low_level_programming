#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the beginning of a list_t list.
*
* @head: head of the list.
* @str: string.
*
* Return: address of the new node.
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	int len = 0;
	char *str_dup;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (*(str_dup + len))
	{
		len++;
	}

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (*head);
}
