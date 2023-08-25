#include "lists.h"

/**
* add_node_end - this function add a new node at the end of the list
* @head: the first node of the list.
* @str: string array.
* Return: the address ofthe new element or null if failed.
*/

list_t *add_node_end(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		list_t *present = *head;

		do {
			present = present->next;
		} while (present->next != NULL);

		present->next = new_node;
	}
	return (new_node);
}
