#include "lists.h"

/**
* pop_listint - this function deletes the head node
* and returns the data.
* @head: head node of the linked list.
* Return: the value associated with the head node.
*/

int pop_listint(listint_t **head)
{
	int data_value;

	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	data_value = (*head)->n;

	tmp = *head;

	*head = (*head)->next;

	free(tmp);

	return (data_value);
}
