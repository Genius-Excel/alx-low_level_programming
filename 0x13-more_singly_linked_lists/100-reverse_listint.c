#include "lists.h"

/**
* reverse_listint - this function reverse a linked list.
* @head: head node for the linked list.
* Return: Reverse of the list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;

		prev = current;

		current = next;
	}

	*head = prev;

	return (*head);
}
