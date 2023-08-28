#include "lists.h"

/**
* free_listint - this function free the memory in the list.
* @head: head node of the list.
* Return: void
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = (*head).next;

		free(tmp);
	}
}
