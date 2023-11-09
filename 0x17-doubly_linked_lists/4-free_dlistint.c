#include "lists.h"

/**
* free_dlistint - this function free the allocae memory used.
* @head: head node o the list.
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_list;

	dlistint_t *new_list;

	current_list = head;

	while (current_list != NULL)
	{
		new_list = (*current_list).next;

		free(current_list);
		current_list = new_list;
	}
}
