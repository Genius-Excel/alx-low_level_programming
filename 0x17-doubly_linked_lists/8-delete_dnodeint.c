#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node at index.
* @head: head node of the list.
* @index: index of the node.
* Return: 1 on success.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	dlistint_t *temp_node;

	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		dlistint_t *tmp = *head;

		*head = (*(*head)).next;

		if (*head != NULL)
		{
			(*(*head)).prev = NULL;
		}

		free(tmp);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = (*current).next;
	}

	if (current == NULL || (*current).next == NULL)
	{
		return (-1);
	}

	temp_node = (*current).next;

	(*current).next = (*temp_node).next;

	if ((*temp_node).next != NULL)
	{
		(*temp_node).next->prev = current;
	}

	free(temp_node);

	return (1);
}
