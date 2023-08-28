#include "lists.h"

/**
* free_listint2 - this function frees the allocated memory for each
* elements in the list.
* @head: head node of the list.
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
