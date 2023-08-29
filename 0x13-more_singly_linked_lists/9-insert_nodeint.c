#include "lists.h"

/**
* insert_nodeint_at_index - this function inserts  new node at
* a given position.
* @head: head node of the list.
* @idx: index of the list.
* @n: integer data value of the list.
* Return: address of the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;

	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current = *head;

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
