#include "lists.h"

/**
* reverse_listint - this function reverse a linked list.
* @head: head node for the linked list.
* Return: Reverse of the list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *current = NULL;

	while (current != NULL)
	{
		current = (*head)->next;

		(*head)->next = prev;

		current = *head;

		*head = prev;
	}

	*head = current;

	return (*head);
}
