#include "lists.h"

/**
* delete_nodeint_at_index - this function deletes an element at the
* specified index of tthe linked list.
* @head: head node if the linked list.
* @index: specified index of the linked list which is to be deleted.
* Return: 1 if sucessful.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;

	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *tmp;

		tmp = *head;

		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	current = *head;
	prev = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;
	free(current);

	return (1);
}
